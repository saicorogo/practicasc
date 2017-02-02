/*
Ejemplo Structs y campos de bits.
*/
#include<stdio.h>
#include<string.h>
struct becario{
	char nombre[12];
	int edad;
	char procedencia[12];
	int generacion;
	unsigned int proyecto:1; //campo de bits (tamaño en bits de la var)
};
int main()
{
	struct becario bec;
	strcpy(bec.nombre,"Fernando"); //donde lo voy a  guardar y que voy a guardar
	bec.edad=26;
	strcpy(bec.procedencia,"IPN");
	bec.generacion=10;
	printf("Nombre:%s\nEdad:%d\nProcedencia:%s\nGeneracion:%d\n ",bec.nombre,bec.edad,bec.procedencia,bec.generacion);
	bec.proyecto=1;
	printf((bec.proyecto&1)?"SI\n":"SIN PROYECTO\n");

	struct becario bed;
        strcpy(bed.nombre,"Diana"); //donde lo voy a  guardar y que voy a g$
        bed.edad=22;
        strcpy(bed.procedencia,"UNAM");
        bed.generacion=11;
        printf("Nombre:%s\nEdad:%d\nProcedencia:%s\nGeneracion:%d\n ",bed.nombre,bed.edad,bed.procedencia,bed.generacion);
        bed.proyecto=1;
        printf((bed.proyecto&1)?"SI\n":"SIN PROYECTO\n");

	struct becario bew;
        strcpy(bew.nombre,"Gonzalo"); //donde lo voy a  guardar y que voy a g$
        bew.edad=24;
        strcpy(bew.procedencia,"UNAM");
        bew.generacion=11;
        printf("Nombre:%s\nEdad:%d\nProcedencia:%s\nGeneracion:%d\n ",bew.nombre,bew.edad,bew.procedencia,bew.generacion);
        bew.proyecto=1;
        printf((bew.proyecto&1)?"SI\n":"SIN PROYECTO\n");
	
	struct becario beu;
        strcpy(beu.nombre,"Yeudiel"); //donde lo voy a  guardar y que voy a g$
        beu.edad=27;
        strcpy(beu.procedencia,"UNAM");
        beu.generacion=11;
        printf("Nombre:%s\nEdad:%d\nProcedencia:%s\nGeneracion:%d\n ",beu.nombre,beu.edad,beu.procedencia,beu.generacion);
        beu.proyecto=1;
        printf((beu.proyecto&1)?"SI\n":"SIN PROYECTO\n");
	
        struct becario bei;
        strcpy(bei.nombre,"Virgilio"); //donde lo voy a  guardar y que voy a g$
        bei.edad=22;
        strcpy(bei.procedencia,"UNAM");
        bei.generacion=11;
        printf("Nombre:%s\nEdad:%d\nProcedencia:%s\nGeneracion:%d\n ",bei.nombre,bei.edad,bei.procedencia,bei.generacion);
        bei.proyecto=1;
        printf((bei.proyecto&1)?"SI\n":"SIN PROYECTO\n");
       
	struct becario bes;
        strcpy(bes.nombre,"Armando"); //donde lo voy a  guardar y que voy a g$
        bes.edad=23;
        strcpy(bes.procedencia,"UNAM");
        bes.generacion=11;
        printf("Nombre:%s\nEdad:%d\nProcedencia:%s\nGeneracion:%d\n ",bes.nombre,bes.edad,bes.procedencia,bes.generacion);
        bes.proyecto=1;
        printf((bes.proyecto&1)?"SI\n":"SIN PROYECTO\n");
      
	struct becario bet;
        strcpy(bet.nombre,"Cristian"); //donde lo voy a  guardar y que voy a g$
        bet.edad=23;
        strcpy(bet.procedencia,"UNAM");
        bet.generacion=11;
        printf("%s,%d,%s,%d,\n ",bet.nombre,bet.edad,bet.procedencia,bet.generacion);
        bet.proyecto=1;
        printf((bet.proyecto&1)?"SI\n":"SIN PROYECTO\n");
       
	struct becario beo;
        strcpy(beo.nombre,"Fernando"); //donde lo voy a  guardar y que voy a g$
        beo.edad=23;
        strcpy(beo.procedencia,"UNAM");
        beo.generacion=11;
        printf("Nombre:%s\nEdad:%d\nProcedencia:%s\nGeneracion:%d\n ",beo.nombre,beo.edad,beo.procedencia,beo.generacion);
        beo.proyecto=1;
        printf((beo.proyecto&1)?"SI\n":"SIN PROYECTO\n");
        


}
