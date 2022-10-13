#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <cstdlib>
using namespace std;

int keuzemenu(int& keuze, int& budget, fstream& winkelwagen);
void welkom(string& naam, int& leeftijd, int& budget, fstream& winkelwagen);

void welkom(string& naam, int& leeftijd, int& budget, fstream& winkelwagen)
{
    cout << "Welkom, voer je leeftijd en naam in. Je budget wordt bepaald aan de hand van je leeftijd. \nJe kunt zoveel cadeau's kiezen, zo lang het binnen je budget zit!";
    cout << "\nVul je naam in:\n";
    cin >> naam;
    cout << "Nu je leeftijd:\n";
    cin >> leeftijd;
    if (leeftijd < 18 || leeftijd > 70)
    {
        cout << "\nJe leeftijd is ongeldig, begin opnieuw.\n";
        welkom(naam, leeftijd, budget, winkelwagen);
    }
    else
    {
        winkelwagen << endl << naam << ", " << leeftijd << endl;
        cout << "Dit is nu je budget: ";
        budget = leeftijd * 2;
        cout << budget << endl;
    }
    
}

void electronica(int& budget, fstream& winkelwagen) 
{
    system("cls");
    int keuze = 0;
    string electro_kado[] = { "wekkerradio", "platenspeler", "drone" };
    float prijzen[] = { 20, 50, 75 };
    cout << "Je budget is " << budget << endl;

    cout << "Maak nu je keuze uit de volgende artikelen:\n";
    cout << "Typ 1 voor: " << electro_kado[0] << " Prijs: " << prijzen[0] << endl;
    cout << "Typ 2 voor: " << electro_kado[1] << " Prijs: " << prijzen[1] << endl;
    cout << "Typ 3 voor: " << electro_kado[2] << " Prijs: " << prijzen[2] << endl;

    cout << "Jouw keuze: ";
    cin >> keuze;
    
    if (keuze == 1)
    {
        if (budget >= prijzen[0])
        {
            cout << "Je hebt gekozen voor: " << electro_kado[0] << endl;
            cout << "Dit kado kost " << prijzen[0] << endl;
            budget = budget - prijzen[0];
            cout << "Je budget is geupdate, het is nu: " << budget << endl;
            cout << "Klik op een toets om terug te gaan naar de categorien.";
            winkelwagen << electro_kado[0] << endl;
            system("pause >> null");
            keuzemenu(keuze, budget, winkelwagen);
        }
        else
        {
            cout << "Dit kado ligt buiten je budget, kies een andere.\n";
            system("pause >> null");
            keuzemenu(keuze, budget, winkelwagen);
        }
    }
    else if (keuze == 2)
    {
        if (budget >= prijzen[1])
        {
            cout << "Je hebt gekozen voor: " << electro_kado[1] << endl;
            cout << "Dit kado kost €" << prijzen[1] << endl;
            budget = budget - prijzen[1];
            cout << "Je budget is geupdate, het is nu: " << budget << endl;
            cout << "Klik op een toets om terug te gaan naar de categorien.";
            winkelwagen << electro_kado[1] << endl;
            system("pause >> null");
            keuzemenu(keuze, budget, winkelwagen);
        }
        else
        {
            cout << "Dit kado ligt buiten je budget, kies een andere.\n";
            system("pause >> null");
            keuzemenu(keuze, budget, winkelwagen);
        }
    }
    else
    {
        if (budget >= prijzen[2])
        {
            cout << "Je hebt gekozen voor: " << electro_kado[2] << endl;
            cout << "Dit kado kost €" << prijzen[2] << endl;
            budget = budget - prijzen[2];
            cout << "Je budget is geupdate, het is nu: " << budget << endl;
            cout << "Klik op een toets om terug te gaan naar de categorien.";
            winkelwagen << electro_kado[2] << endl;
            system("pause >> null");
            keuzemenu(keuze, budget, winkelwagen);
        }
        else
        {
            cout << "Dit kado ligt buiten je budget, kies een andere.\n";
            system("pause >> null");
            keuzemenu(keuze, budget, winkelwagen);
        }
    }

}

void gezondheid(int& budget, fstream& winkelwagen)
{
    system("cls");
    int keuze = 0;
    string gezond_kado[] = { "bloeddrukmeter", "stappenteller", "sauna-ticket" };
    float prijzen[] = { 65, 25, 50 };
    cout << "Je budget is " << budget << endl;

    cout << "Maak nu je keuze uit de volgende artikelen:\n";
    cout << "Typ 1 voor: " << gezond_kado[0] << " Prijs: " << prijzen[0] << endl;
    cout << "Typ 2 voor: " << gezond_kado[1] << " Prijs: " << prijzen[1] << endl;
    cout << "Typ 3 voor: " << gezond_kado[2] << " Prijs: " << prijzen[2] << endl;

    cout << "Jouw keuze: ";
    cin >> keuze;

    if (keuze == 1)
    {
        if (budget >= prijzen[0])
        {
            cout << "Je hebt gekozen voor: " << gezond_kado[0] << endl;
            cout << "Dit kado kost " << prijzen[0] << endl;
            budget = budget - prijzen[0];
            cout << "Je budget is geupdate, het is nu: " << budget << endl;
            cout << "Klik op een toets om terug te gaan naar de categorien.";
            winkelwagen << gezond_kado[0] << endl;
            system("pause >> null");
            keuzemenu(keuze, budget, winkelwagen);
        }
        else
        {
            cout << "Dit kado ligt buiten je budget, kies een andere.\n";
            system("pause >> null");
            keuzemenu(keuze, budget, winkelwagen);
        }
    }
    else if (keuze == 2)
    {
        if (budget >= prijzen[1])
        {
            cout << "Je hebt gekozen voor: " << gezond_kado[1] << endl;
            cout << "Dit kado kost €" << prijzen[1] << endl;
            budget = budget - prijzen[1];
            cout << "Je budget is geupdate, het is nu: " << budget << endl;
            cout << "Klik op een toets om terug te gaan naar de categorien.";
            winkelwagen << gezond_kado[1] << endl;
            system("pause >> null");
            keuzemenu(keuze, budget, winkelwagen);
        }
        else
        {
            cout << "Dit kado ligt buiten je budget, kies een andere.\n";
            system("pause >> null");
            keuzemenu(keuze, budget, winkelwagen);
        }
    }
    else
    {
        if (budget >= prijzen[2])
        {
            cout << "Je hebt gekozen voor: " << gezond_kado[2] << endl;
            cout << "Dit kado kost €" << prijzen[2] << endl;
            budget = budget - prijzen[2];
            cout << "Je budget is geupdate, het is nu: " << budget << endl;
            cout << "Klik op een toets om terug te gaan naar de categorien.";
            winkelwagen << gezond_kado[2] << endl;
            system("pause >> null");
            keuzemenu(keuze, budget, winkelwagen);
        }
        else
        {
            cout << "Dit kado ligt buiten je budget, kies een andere.\n";
            system("pause >> null");
            keuzemenu(keuze, budget, winkelwagen);
        }
    }
}

void koken(int& budget, fstream& winkelwagen)
{
    system("cls");
    int keuze = 0;
    string koken_kado[] = { "messenset", "mixer", "hapjespan" };
    float prijzen[] = { 80, 45, 20 };
    cout << "Je budget is " << budget << endl;

    cout << "Maak nu je keuze uit de volgende artikelen:\n";
    cout << "Typ 1 voor: " << koken_kado[0] << " Prijs: " << prijzen[0] << endl;
    cout << "Typ 2 voor: " << koken_kado[1] << " Prijs: " << prijzen[1] << endl;
    cout << "Typ 3 voor: " << koken_kado[2] << " Prijs: " << prijzen[2] << endl;

    cout << "Jouw keuze: ";
    cin >> keuze;

    if (keuze == 1)
    {
        if (budget >= prijzen[0])
        {
            cout << "Je hebt gekozen voor: " << koken_kado[0] << endl;
            cout << "Dit kado kost " << prijzen[0] << endl;
            budget = budget - prijzen[0];
            cout << "Je budget is geupdate, het is nu: " << budget << endl;
            cout << "Klik op een toets om terug te gaan naar de categorien.";
            winkelwagen << koken_kado[0] << endl;
            system("pause >> null");
            keuzemenu(keuze, budget, winkelwagen);
        }
        else
        {
            cout << "Dit kado ligt buiten je budget, kies een andere.\n";
            system("pause >> null");
            keuzemenu(keuze, budget, winkelwagen);
        }
    }
    else if (keuze == 2)
    {
        if (budget >= prijzen[1])
        {
            cout << "Je hebt gekozen voor: " << koken_kado[1] << endl;
            cout << "Dit kado kost €" << prijzen[1] << endl;
            budget = budget - prijzen[1];
            cout << "Je budget is geupdate, het is nu: " << budget << endl;
            cout << "Klik op een toets om terug te gaan naar de categorien.";
            winkelwagen << koken_kado[1] << endl;
            system("pause >> null");
            keuzemenu(keuze, budget, winkelwagen);
        }
        else
        {
            cout << "Dit kado ligt buiten je budget, kies een andere.\n";
            system("pause >> null");
            keuzemenu(keuze, budget, winkelwagen);
        }
    }
    else
    {
        if (budget >= prijzen[2])
        {
            cout << "Je hebt gekozen voor: " << koken_kado[2] << endl;
            cout << "Dit kado kost €" << prijzen[2] << endl;
            budget = budget - prijzen[2];
            cout << "Je budget is geupdate, het is nu: " << budget << endl;
            cout << "Klik op een toets om terug te gaan naar de categorien.";
            winkelwagen << koken_kado[2] << endl;
            system("pause >> null");
            keuzemenu(keuze, budget, winkelwagen);
        }
        else
        {
            cout << "Dit kado ligt buiten je budget, kies een andere.\n";
            system("pause >> null");
            keuzemenu(keuze, budget, winkelwagen);
        }
    }
}

int keuzemenu(int& keuze, int& budget, fstream& winkelwagen)
{
    system("cls");
    if (budget <= 19)
    {
        cout << "Je hebt geen budget meer.";
        return(0);
    }
    cout << "Dit is je budget: " << budget << endl;
    cout << "Je kunt uit de volgende 3 categorien kiezen:\n";
    cout << "1: Electronica\n2: Gezondheid\n3: Koken\n";
    cout << "Kies nu je categorie door 1, 2 of 3 te typen.";
    cin >> keuze;

    if (keuze == 1) {
        electronica(budget, winkelwagen);
    }
    else if (keuze == 2) {
        gezondheid(budget, winkelwagen);
    }
    else {
        koken(budget, winkelwagen);
    }

    return(keuze);
}

int main()
{
    fstream winkelwagen;
    winkelwagen.open("winkelwagen.txt", ios_base::app);
    string naam;
    int leeftijd;
    int budget;
    int optie;
    
    welkom(naam, leeftijd, budget, winkelwagen);
    
    int keuze;
    keuzemenu(keuze, budget, winkelwagen);

    system("pause >> null");
    return 0;
}