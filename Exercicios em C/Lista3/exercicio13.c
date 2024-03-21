#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    /* Escreva um trecho de codigo para fazer a criacao dos novos tipos de 
    dados conforme solicitado abaixo
    horario hora minutos e segundos
    data  dia mes e ano
    compromisso composto de uma data,horário e texto que descreve o compromisso.
     */
    struct horario
    {
        int  hora;
        int minuto;
        int segundo;
    };
    typedef struct horario Horario;
    struct data{
     int dia;
     int mes;
     int ano;   
    };
    typedef struct data Data;
    struct compromisso
    {
        Data dia_compromisso;
        Horario hora_compromisso;
        char descricao[100]; 
    };
    // era so o trecho nao o codigo completo, então fica por isso mesmo?
    return 0;
}
