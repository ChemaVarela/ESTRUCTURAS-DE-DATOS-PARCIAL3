
#include <stdio.h>
#include <string.h>


typedef struct{

    char name[50];
    char lastName[50];
    float average;

}Alumno;

void readfile(FILE *aprendizaje2,Alumno arralumno[10]);
void printfile(Alumno arralumno[10]);

int main()
{
    FILE *aprendizaje2;
    Alumno arralumno[10];
    readfile(aprendizaje2,arralumno);
    printfile(arralumno);

    return 0;


}

void readfile(FILE *aprendizaje2,Alumno arralumno[10])
{

    Alumno alumno;
    aprendizaje2 = fopen("aprendizaje2.dat", "rb");

    rewind(aprendizaje2);
    for(int i=0;i<10;i++){
        fread(&alumno, sizeof(Alumno), 1, aprendizaje2);
    while(!feof(aprendizaje2)){

    strcpy(arralumno->name[i],alumno.name);
    strcpy(arralumno->lastName[i],alumno.lastName);
    arralumno->average[i] = alumno->average;
    fread(&alumno, sizeof(Alumno), 1, aprendizaje2);
    }
    }


    fclose(aprendizaje2);
}

void printfile(Alumno arralumno[10])
{
    for(int i=0;i<10;i++){
        printf("%s", arralumno.name[i]);
        printf(" %s", arralumno.lastName[i]);
        printf(" %f\n", arralumno.average[i]);
    }

}

