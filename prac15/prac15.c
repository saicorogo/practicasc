#include<stdio.h>
#include<sqlite.h> //para trabajar con SQLite
int main(){
	sqlite3 *db;//definicion del puntero de la base de datos
	char *err =0;//var para mensaje de error
	int s;    //var retorno de sentencia
	sqlite3_stmt *rc;//puntero a la respuesta de la consulta

	s=sqlite3_open("becarios.sqlite",&db);//conexion a la base de datos
	if (s!=SQLITE_OK){
		fprintf(stderr,"No se pude acceder a la db:%s.\n",sqlite3_errmsg(db));
		sqlite3_close(db);
		return(1);
}
	s=sqlite3_exec(db,"CREATE TABLE becario (Idbec INTEGER PRIMARY KEY, Nombre VARCHAR[12], Edad INT, Procedencia VARCHAR[12], Generacion INT, Proyecto CHAR[2] )"NULL, NULL, &err);
	if(rc != SQLITE_OK){
	fprintf(stderr,"Error al crear la tabla: %s.\n", err);
	sqlite3_free(err);
	sqlite3_close(db);
	return(2);
//insercion de datos

	s=sqlite3_exec(db,"INSERT INTO becario VALUES('Fernando', 26, 'IPN', 10, 'SI')", NULL, NULL, err);
	s=sqlite3_exec(db,"INSERT INTO becario VALUES('Diana', 22, 'UNAM', 11, 'SI')", NULL, NULL, err);
	s=sqlite3_exec(db,"INSERT INTO becario VALUES('Gonzalo', 24, 'UNAM', 11, 'SI')", NULL, NULL, err);
	s=sqlite3_exec(db,"INSERT INTO becario VALUES('Yeudiel', 27, 'UNAM', 11, 'SI')", NULL, NULL, err);
	s=sqlite3_exec(db,"INSERT INTO becario VALUES('Virgilio', 22, 'UNAM', 11, 'SI')", NULL, NULL, err);
	s=sqlite3_exec(db,"INSERT INTO becario VALUES('Armando', 23, 'UNAM', 11, 'SI')", NULL, NULL, err);
	s=sqlite3_exec(db,"INSERT INTO becario VALUES('Cristian', 23, 'UNAM', 11, 'SI')", NULL, NULL, err);
	s=sqlite3_exec(db,"INSERT INTO becario VALUES('Fernando', 23, 'UNAM', 11, 'SI')", NULL, NULL, err);
	if(rc != SQLITE_OK){
        fprintf(stderr,"Error al en la insercion: %s.\n", err);
        sqlite3_free(err);
        sqlite3_close(db);	
	return(2);
	sqlite3_close(db);
return0;
}
