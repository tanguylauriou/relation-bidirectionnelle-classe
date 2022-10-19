/**
 * @file Individu.h
 * @author tanguy lauriou
 * @brief specifie une classe Individu en relation avec une Voiture
 * @version 0.1
 * @date 2022-10-19
 * @details cette classe représente un individu par son nom prénom.
 * 
 * La classe Individu est lié à la classe voiture via un pointeur
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef INDIVIDU_H
#define INDIVIDU_H

using namespace std;

#include "Voiture.h" // Utilisée ci-dessous
#include <iostream>

class Voiture; /* Annonce une définition ultérieure de Voiture
                   permet de faire référence aux membres de Voiture dans la classe Individu */
/**
 * @brief représente un Individu par son nom et son prénom et la voiture qu'il conduit
 * 
 * @warning un individu ne peut conduire qu'une seule voiture
 * 
 * @deprecated utiliser la classe personne à la place
 */
class Individu
{
    // ATTRIBUTS
  public:
  /**
   * @brief Le nom de l'individu
   * 
   */
    string nom;     
  /**
   * @brief Le prénom de l'individu
   * 
   */
    string prenom;   
  /**
   * @brief  Lien avec la voiture de l'individu

   * 
   */
    Voiture *maVoiture; 
    // MÉTHODES
  public:
    /**
     * @brief construit un nouvel objet de la classe Individu à partir du nom et du prénom
     * 
     */
    Individu(string = "", string = "");
    // destructeur
    ~Individu();

    /**
     * @brief retourne l'identité de l'individu
     * 
     * @return retourne une chaine sous la forme nom/prénom
     * 
     * @bug une espace en trop entre le nom et le prénom
     * 
     * @todo ajouter un paramétre qui permet de choisir entre un retour "nom/prénom" ou "prénom/nom"
     */
    string toString();        
    string toStringAndLink(); // Affiche l'identité de l'individu et de sa voiture s'il en a une

    // Méthodes spécifiques
    void majMaVoiture(Voiture* voiture);
    /**
     * @brief défini la voiture conduite par l'individu
     * 
     * @param [in] voiture un pointeur vers une objet de la classe voiture
     */
    void setMaVoiture(Voiture* voiture);
    void supprimerLien();
};

#endif // INDIVIDU_H