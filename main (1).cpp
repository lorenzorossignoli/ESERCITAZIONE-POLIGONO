#include <iostream>
# include "polygon.h"
# include "Rectangle.h"
# include "rhombus.h"
# include "IsoTrapezoid.h"
using namespace std;
# define NUM_OBJECTS 100
int main() {
    int choice=0;
    int count=0;
    Polygon* objects[NUM_OBJECTS]; 
    while (1)
    {
        cout << "Menu" << endl;
        cout << ">1.  Rettangolo" << endl;
        cout << ">2. Rombo" << endl;
        cout << ">3. Isotrapezoide" << endl;
        cout << ">4. Funzione di disegno" << endl;
        cout << ">5. Esci dal programma" << endl;
        
        cout << "Seleziona un'opzione: ";
        cin >> choice;
         switch (choice) 
         {
            case 1:
                float lenght=0;
                float width=0;
                cout << "Hai selezionato l'opzione 1." << endl;
                cout<<" Inserire lunghezza"<< endl;
                cin>>lenght;
                cout<<" Inserire altezza"<< endl;
                cin>>width;
                Rectangle * ptr1 =new Rectangle(width,lenght);
                objects[count]=ptr1;
                count++;
                break;
            case 2:
                float diagH=0;
                float diagV=0;
                cout << "Hai selezionato l'opzione 2." << endl;
                cout<<" Inserire diagonale maggiore"<< endl;
                cin>>diagH;
                cout<<" Inserire diagonale minore"<< endl;
                cin>>diagV;
                Rhombus* ptr2 = new Rhombus(diagH, diagV);
                objects[count] = ptr2;
                count++;
                break;
            case 3:
                cout << "Hai selezionato l'opzione 3." << endl;
                float bottomside=0;
                float topside=0;
                float height=0;
                cout<<" Inserire base maggiore"<< endl;
                cin>>bottomside;
                cout<<" Inserire base minore"<< endl;
                cin>>topside;
                cout<<" Inserire altezza"<< endl;
                cin>>height;
                IsoTrapezoid* ptr3 =new IsoTrapezoid(bottomside,topside,height);
                objects[count]=ptr3;
                count++;
                break;
            case 4:
            cout<< "Hai selezionato l' opzione 4"<<endl;
            for(int i=0; i<count;i++)
            {
                objects[i]->GetArea();
                objects[i]->GetPerimeter();
                cout<<"L' Area e' " <<objects[i]->GetArea() <<endl;
                cout<<"Il perimetro e'" <<objects[i]->GetPerimeter() <<endl;
            }
                break;
            case 5:
                cout << "Uscita dal programma." << endl;
                for(int i=0;i<count;i++)
                {
                    delete objects[i];
                    objects[i]=nullptr;
                }
                 delete[] * objects;
                 *objects = nullptr;
                break;   
            default:
                cout << "Selezione non valida. Riprova." << endl;
        }
    }
        
return 0;
    } 
  
    
    
  