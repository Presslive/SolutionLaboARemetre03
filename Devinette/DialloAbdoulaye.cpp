//But: Donner la possibilité à l’utilisateur de deviner le nombre contenu dans random.
/*L’utilisateur a un maximum de 5 chances. Le programme vérifie que l’utilisateur a bien entré un nombre entre 0 et 
100 et lui indique s’il gagne ou dans le cas contraire lui indique le nombre d’essais restant et lui redemande un nombre.*/
//Auteur:Diallo Abdoulaye
//Date:2021-09-13

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "");
    //constantes

    //variables
    int random;
    int nbr;

    srand(time(0));
    random = rand() % 101;

    std::cout << "Entrez un nombre pour deviner le nombre cachée:" << std::endl;

    for (int Essai = 4; Essai >= 0; Essai--) //Condition:4 chances, atteint 0 quitte la loop
    {

        std::cout << "Nombre : ";
        cin >> nbr;

        if (nbr >= 0 && nbr <= 100) //Condition:Si le nombre entrer est entre 0 et 100 on rentre ()
        {
            if (nbr != random) //Condition:Si le nombre est != du nombre random on rentre ()
            {
                std::cout << "Perdu -->> " << Essai << " restants" << std::endl; //Affiche le nombre d'essaye restant
            }
            else
            {
                std::cout << "Gagner" << std::endl; //Si le nombre entrer est = à random il a gagner
                break;
            }
        }
        else //Si le nombre n'est pas entre 0 et 100
        {
            std::cout << "Ce nombre n'est pas entre 0 et 100" << std::endl;
            break;
        }
    }

    system("pause");
    return 0;
}

/*Plan tests

-1       Ce nombre n'est pas entre 0 et 100 et break       

12       Perdu -->> 4 restants

21       Perdu -->> 3 restants

99       Perdu -->> 2 restants

0        Perdu -->> 1 restants

300      Ce nombre n'est pas entre 0 et 100

*/