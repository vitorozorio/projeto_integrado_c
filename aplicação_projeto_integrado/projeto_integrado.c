/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   projeto_integrado.c
 * Author: zori-dev
 *
 * Created on 1 de Outubro de 2022, 01:46
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    // variaveis
    char telefone[20];
    char nome[30];
    char endereco[60];
    // variaveis
    // entrada de dados
    printf ("\n----------------------------------------------\n");
    printf ("insira seus dados\n");
    printf ("nome :");
    scanf ("%s", &nome);
    printf ("endereço :");
    scanf ("%s", &endereco);
    printf ("telefone :");
    scanf ("%s", &telefone);
    // saida de dados
    printf ("\n----------------------------------------------\n");
    printf("estes são seus dados !!!");
    printf("\nseu nome :%s", nome);
    printf("\nseu endereço :%s", endereco); 
    printf("\nseu telefone :%s", telefone);
    printf ("\n----------------------------------------------\n");
    // fim do programa
    return (EXIT_SUCCESS);
}