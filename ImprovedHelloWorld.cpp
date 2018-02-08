#include <iostream>
#include <string>

void printHelloWorld(std::string eilute);

int main(){
    std::string vardas, eilute;
    std::cout << "Iveskite savo varda: ";
    std::cin >> vardas;

    if(vardas.back()!='a' && vardas.back()!='i' && vardas.back()!='e' && vardas.back()!='u' && vardas.back()!='o'){
        eilute.append("Sveikas, ");
    }else eilute.append("Sveika, ");

    eilute.append(vardas);
    eilute.push_back('!');

    printHelloWorld(eilute);
}

void printHelloWorld(std::string eilute){
    for(int i=0; i<eilute.size()+2; i++) std::cout << "*";
    std::cout << std::endl;

    for(int i=0; i<eilute.size()+2;i++) {
            if(!(i==0 || i==eilute.size()+1)) std::cout << " ";
            else std::cout << "*";
    }
    std::cout << std::endl;

    std::cout << "*" << eilute << "*" << std::endl;

    for(int i=0; i<eilute.size()+2;i++) {
            if(!(i==0 || i==eilute.size()+1)) std::cout << " ";
            else std::cout << "*";
    }
    std::cout << std::endl;

    for(int i=0; i<eilute.size()+2;i++) std::cout << "*";
    std::cout << std::endl;
}
