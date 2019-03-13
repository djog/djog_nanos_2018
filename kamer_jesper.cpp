#include "kamer_jesper.h"
#include "ui_kamer_jesper.h"
#include "hoofd_scherm.h"

#include <cassert>

kamer_jesper::kamer_jesper(hoofd_scherm * het_hoofd_scherm, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::kamer_jesper),
    m_hoofd_scherm(het_hoofd_scherm)
{
    this->ui->setupUi(this);

    this->ui->deur->setText("deur is dicht");
    this->ui->deur_knop_hint->setHidden(true);
    this->ui->vraag->setHidden(true);
    this->ui->antwoord_op_vraag->setHidden(true);

    this->ui->geheime_deur->setHidden(true);
    this->ui->muur_links_onder->setHidden(true);
    this->ui->muur_rechts_onder->setHidden(true);
    this->ui->geheime_deur_2->setHidden(true);
    this->ui->geheime_deur_2->setText("ge\nhe\nim\ne\nde\nur");
    this->ui->kist->setHidden(true);
}

kamer_jesper::~kamer_jesper()
{
    delete this->ui;
}

void kamer_jesper::on_kast_clicked()
{
    if(kast_open == 1){
        this->ui->kist->setHidden(true);
        this->ui->geheime_deur->setHidden(true);
        this->ui->geheime_deur_2->setHidden(true);
        this->ui->muur_links_onder->setHidden(true);
        this->ui->muur_rechts_onder->setHidden(true);
        this->ui->kast->move(this->kast_dicht_x, this->kast_dicht_y);
        kast_open = 3;
    }
    if(kast_open == 2){
        this->ui->kast->move(this->kast_open_x, this->kast_open_y);
        this->ui->geheime_deur->setVisible(true);
        this->ui->muur_links_onder->setVisible(true);
        this->ui->muur_rechts_onder->setVisible(true);
        kast_open = 4;
    }
    if(kast_open == 3){
        kast_open = 2;
    }
    if(kast_open == 4){
        kast_open = 1;
    }
}

void kamer_jesper::on_deur_knop_pressed()
{
    this->ui->deur->setText("deur is open");
    this->ui->deur->setEnabled(true);
    if(items_in_kist == 0 && al_open == false){
         this->ui->vraag->setVisible(true);
         this->ui->antwoord_op_vraag->setVisible(true);
    }
    deur_open = true;
}

void kamer_jesper::on_deur_knop_released()
{
    if(al_open == false){
    this->ui->deur->setText("deur is dicht");
        this->ui->deur_knop_hint->setVisible(true);
    }
    if(je_mag_er_langs == false){
    this->ui->deur->setDisabled(true);
    deur_open = false;
    }
}

void kamer_jesper::on_deur_clicked()
{
    if (deur_open) {
        this->m_hoofd_scherm->ga_naar(kamer_soort::jasper);
    }
}

void kamer_jesper::on_geheime_deur_clicked()
{
    this->ui->geheime_deur_2->setVisible(true);
    this->ui->geheime_deur->setHidden(true);
    this->ui->kist->setVisible(true);
}

void kamer_jesper::on_kist_clicked()
{
    switch (this->items_in_kist) {
    case 2:
        this->m_hoofd_scherm->voeg_voorwerp_toe(voorwerp_soort::pistool);
        --this->items_in_kist;
        break;
    case 1:
        this->m_hoofd_scherm->voeg_voorwerp_toe(voorwerp_soort::tak);
        --this->items_in_kist;
        this->ui->kist->setDisabled(true);
        break;
    case 0:
        break;
    default:
        assert(!"Onjuist aantal items in kist"); //!OCLINT
    }
}

void kamer_jesper::on_geheime_deur_2_clicked()
{
    this->ui->geheime_deur_2->setHidden(true);
    this->ui->geheime_deur->setVisible(true);
    this->ui->kist->setHidden(true);
}

void kamer_jesper::on_antwoord_op_vraag_accepted()
{
    this->ui->antwoord_op_vraag->setHidden(true);
    this->ui->vraag->setHidden(true);
    this->ui->deur_knop_hint->setHidden(true);
    al_open = true;
    je_mag_er_langs = true;
}
