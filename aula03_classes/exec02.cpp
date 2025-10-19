/*Classes - Exercicio 2*/

 
#include <iostream>
#include <string>
using namespace std;
 
   class Triangulo{
      public:
      double a, b, c;
      
      
       void dados(){
         cout<<"Digite os valores a, b e c: ";
         cin>>a>>b>>c;
       }
       
       bool verificaTriangulo(){
           return (a > 0 && b > 0 && c > 0) && (a + b > c) && (a + c > b) && (b + c > a);
       }
       
       string tipo(){
          
          if(!verificaTriangulo()){
              cout<<"Nao e Triangulo \n";
          } 
          
        
          
            if(a==b && a==c && b==a && b==c && c==a && c==b){
               return "Equilatero";
           }
           else if(a==b && c!=a || a==c && b!=a || b==c && a!=b){
               return "Isosceles";
           }
           else if(a!=b && a!=c && b!=c){
               return "Escaleno";
           }
         
    }
     
   };
 
int main(int argc, char** argv)
{
     Triangulo obj;
     obj.dados();
     cout << "Tipo: " << obj.tipo() << "\n"; 
       
 
    return 0;
}
