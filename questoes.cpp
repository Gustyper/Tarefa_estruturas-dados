#include <iostream>

void CalculoIMC(float massa, float altura)
{
    int IMC = massa / (altura * altura);
    
    if (IMC < 17) 
    { 
        std::cout << "Muito abaixo do peso";
    }
    else if ((IMC >= 17) && (IMC < 18.5)) 
    { 
        std::cout << "Abaixo do peso"; 
    }
    else if ((IMC >= 18.5) && (IMC < 25)) 
    {
        std::cout << "Peso normal"; 
    }
    else if ((IMC >= 25) && (IMC < 30)) 
    { 
        std::cout << "Acima do peso";
    }
    else if ((IMC >= 25) && (IMC < 30)) 
    { 
        std::cout << "Acima do peso"; 
    }
    else if ((IMC >= 30) && (IMC < 35)) 
    { 
        std::cout << "Obesidade"; 
    }
    else if ((IMC >= 35) && (IMC < 40)) 
    { 
        std::cout << "Obesidade severa"; 
    }
    else
    {
        std::cout << "Obesidade mórbida"; 
    }
    
    std::cout << "\n";
}

void EBissexto(int ano)
{
    if ((ano % 400 == 0) || ((ano % 4 == 0) && !(ano % 100 == 0)))
    {
        std::cout << "É ano bissexto.";
    }
    else
    {
        std::cout << "Não é bissexto.";
    }
    
    std::cout << "\n";
}

int main()
{
    CalculoIMC(50, 1.60);
    //retorno esperado: Peso normal
    
    EBissexto(2004);
    //retorno esperado: É ano bissexto
    
    EBissexto(1003);
    //retorno esperado: Não é bissexto
    
    EBissexto(1900);
    //retorno esperado: Não é bissexto

    return 0;
}
