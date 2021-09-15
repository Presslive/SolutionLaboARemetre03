//But:Écrivez un programme qui lit 10 nombres et qui détermine et affiche la plus grande valeur. Le programme doit utiliser 
//trois variables
//Auteur:Diallo Abdoulaye
//Date:2021-09-13


#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "");
    //constantes

    //variables

    long long Nombre;
    long long Max;

        std::cout <<"- 1 Entrez un nombre : ";
        cin>>Nombre;

        Max=Nombre;                 //initialise max avec la donnée recu(nombre)

        for (int Compteur = 2; Compteur <= 10; Compteur++)      //compte jusqu à 10 et sors de la loop
        {
             std::cout <<"- "<<Compteur << " Entrez un nombre : ";
             cin>>Nombre;

             if (Nombre>Max)                //dans la loop si le nombre est plus > que Max
             {
                 Max=Nombre;                //alors Max se fait remplacer par le plus grand a chaque fois
             }
               
        }
        
        std::cout << Max <<" est le plus grand nombre!" << std::endl;           //à la fin de la loop on ressors la valeur de Max

    system("pause");
    return 0;
}


/*Plan de test 

11
30
4434
43353
346654565
232
-32
34546
32
0

346654565  est le plus grand nombre!

*/