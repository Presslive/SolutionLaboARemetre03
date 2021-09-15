//But:Développez un programme qui entre les ventes brutes hebdomadaires de chaque représentant et qui calcule et 
//affiche son salaire. Entrez -1 à la valeur des ventes pour quitter le programme.
//Auteur:Diallo Abdoulaye
//Date:2021-09-13


#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL,"");

    //constantes
    const int SalaireFixe=250;
    const float Pourcentage=7.5;
    const int Quitter = -1;
    
    //variables
    float vente;
    float total;
            
    std::cout << "Entrez votre Ventes Brutes : ";       //L'utilisateur voit sa
    cin >> vente;       //rentre un nombre
        
     if(vente !=Quitter)     //Si le nombre rentrer est different de -1 =()
     {
         if (vente>=0)
         {
             
         total = SalaireFixe + (Pourcentage * vente / 100);     //calcul le total
        std::cout << "Votre salaire est de : "<<total<<"$"<<endl;   //Affiche le total 
        
        system("pause");
        system("cls");
        }
        else                   //si le nombre rentre = -1 rentre dans ()
     {
         std::cout << "Erreur" << std::endl;        //Affiche erreur
         
     }
       

     }
       
    
    return 0;
}

/* Plan de tests

    -32         Erreur
    0           Votre salaire est de 250$
    -1          Quitte le programme
    100         Votre salaire est de 257.5$
    
*/