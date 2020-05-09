// Zielbeschreibung: 
//      Drei integer (ganze Zahlen) einlesen und abspeichern (ix, iy, iz)
//      Die Summe und das Produkt der Zahlen soll ermittlelt werden (ix*iy*iz, ix+iy+iz)
//      Differenze und Quotient von den aufeinander folgeenden Zahlen festellen (ix/iy, iy/iz, ix-iy, iy-iz)


#include <iostream>

    // function die den prompt fuer Usereingabe an die Console schreibt  
void prompt(int min, int max)
{
    std::cout << "\nHello user!\n\nPlease enter three whole numbers between " << min << " and " << max << ".\n\n";
}                                           


    // function die die gueltigkeit des Userinputs ueberprueft 
bool checkvalid(int min, int max, int a)
{
    if ((a < min) || (a > max))
        return false;
    else
        return true;
}        

    // function die einen prompt einem neuen input an die Console schreibt
void newvalueprompt(int a)
{
    std::cout << "Illegal value " << a << ". Please enter a legal value: ";
}
    
    //function die die eingegeben werte nochmal ausgibt
void logvalues(int a, int b, int c) 
{
    std::cout << "\nThe entered values are: \n\n" << a << '\n' << b << '\n' << c << "\n\n";
}




    //funtions to calculate desired values

int sum(int a, int b, int c)
{
    return a+b+c;
}   

int product(int a, int b, int c)
{
    return a * b * c;
}

int difference(int a, int b)
{
    if (a >= b)
        return a - b;
    else
        return b - a;
}

double quotient(int a, int b)
{
    return (double (a) / double (b));
}


    //function that prints desired values to console 

void output(int a, int b, int c)
{
    std::cout << "The sum of the entered numbers is: " << sum(a, b, c) << "\n\n";
    std::cout << "The product of the entered numbers is: " << product(a, b, c) << "\n\n";
    std::cout << "The difference between the first two numbers (" << a << " and " << b << ") is " << difference(a, b) << "\n\n";
    std::cout << "The difference between the second and third numbers (" <<b << " and " << c << ") is " << difference(b, c) << "\n\n";
    std::cout << "The quotient of the first two numbers(" << a << "/" << b << ") is " << quotient(a, b) << "\n\n";
    std::cout << "The quotient of the second and third numbers(" << b << "/" << c << ") is " << quotient(b, c) << "\n";
}




int main()
{
    const int min{ 0 };             //hier kann die untergrenze der akzeptierten Eingaben festgelegt werden
    const int max{ 999 };           //hier kann die obergrenze der akzeptierten Eingaben festgelegt werden     

    int ix{};                       //Declarition, definition und initialisierung der Variablen
    int iy{};
    int iz{};

    prompt(min, max);               //Gibt den festgelegtem prompt fuer Userinput in der Console aus

    std::cin >> ix >> iy >> iz;     //Variablen werden eingelesen

                                    //Ueberprueft ob die eingegeben Werte inerhalb dem von uns festgelgten Wertebereich fallen
                                    //fordert den User auf illigale Eingaben zu korrigieren
    while (checkvalid(min, max, ix) == false)
    {
        newvalueprompt(ix);
        std::cin >> ix;
    }

    while (checkvalid(min, max, iy) == false)
    {
        newvalueprompt(iy);
        std::cin >> iy;
    }

    while (checkvalid(min, max, iz) == false)
    {
        newvalueprompt(iz);
        std::cin >> iz;
    }

    logvalues(ix, iy, iz);          //Zeigt eingegeben Variablen nochmal an
                             
    output(ix, iy, iz);             //Ausgane der geforderten Ergebnisse

    return 0;
}