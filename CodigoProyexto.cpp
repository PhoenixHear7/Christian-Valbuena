#include <iostream>
using namespace std;

int menu = 0;
int opc1, modificar_materia, cancelar_materia;
float matematicas, fisica, sistemas, biologia;
void modificar_informacion(), eliminar_materia(), promedio_estudiante();



class Estudiante{
  private:
         string nombre;
         string apellido;
         string codigo1;
  public:
     Estudiante(){
         nombre;
         apellido;
         codigo1; 
     }
      void nombres(){
        cout<<"Ingrese su nombre: ";
        cin>>nombre;
     }
      void apellidos(){
        cout<<"Ingrese su apellido: ";
        cin>>apellido;
     }
      void nombrecompleto(){
        cout<<"Nombre completo: "<<nombre<<" "<<apellido<<endl;
     }
       void codigoEstudiante(){
        cout<<"Ingrese su codigo : ";
        cin>>codigo1;
        cout<<"Su codigo es: "<<codigo1<<endl;
     }
}; 

class Curso{
  private:
     string codigo2;
     string nombre;
     string asignatura;
     int creditos;
     int nota;
  public:
     Curso(){
         codigo2;
         nombre;
         asignatura;
         creditos;
         nota;
     }
     void codigocurso(){
         codigo2 = "AE012";
         cout<<codigo2;
     }
     void nombrecurso(){
         cout<<"Nombre del curso: ";
         cout<<"Ingenieria"<<endl;
     }
     void ingresarNotas(){
             cout<<"1. Matematicas"<<endl;
             for(int i = 0; i < 1; i++ ){
             cout<<"Ingrese la nota de Matematicas: ";
             cin>>matematicas;
             cout<<"2. Fisica"<<endl;
             cout<<"Ingrese la nota de Fisica: ";
             cin>>fisica;
             cout<<"3. Sistemas"<<endl;
             cout<<"Ingrese la nota de Sistemas: ";
             cin>>sistemas;
             cout<<"4. Biologia"<<endl;
             cout<<"Ingrese la nota de Biologia: ";
             cin>>biologia;
             }
             cout<<endl;
    }
    void creditosAsignatura(){
        cout<<"Creditos de asignatura "<<endl;
        cout<<"Matematicas 4"<<endl;
        cout<<"Fisica 4"<<endl;
        cout<<"Sistemas 3"<<endl;
        cout<<"Biologia 2"<<endl;
    }
    void notasCurso(){
        cout<<"notas del Estudiante "<<endl;
        for(int i = 0; i < 1; i++ ){
        cout<<"Matematicas: "<<matematicas<<endl;
        cout<<"Biologia: "<<biologia<<endl;
        cout<<"Fisica: "<<fisica<<endl;
        cout<<"Sistemas: "<<sistemas<<endl;
        }
    }
};

int main()
{
    do{
    cout<<"Escoja una opc "<<endl;
    cout<<"1. Ingresar datos de el estudiante  "<<endl;
    cout<<"2. Ingresar notas y Visualizar informacion"<<endl;
    cout<<"3. Modificar la informacion de un curso "<<endl;
    cout<<"4. Cancelar una materia "<<endl;
    cout<<"5. Calcular promedio del estudiante "<<endl;
    cout<<"6. Salir "<<endl;
    
    cout<<"\nOpcion: ";
    cin>>menu;
    cout<<endl;
    
    if(menu == 6){
         cout<<"Hasta pronto. ";
    }
    
    switch(menu){
        case 1:{
         Estudiante e1;
         e1.nombres();
         e1.apellidos();
         e1.nombrecompleto();
         e1.codigoEstudiante();
        
         do{
             cout<<"\n1. Volver al menu principal: "<<endl;
             cout<<"\nOpcion: ";
             cin>>opc1;
             switch(opc1)
             {
               case 1:
                system("clear");
               break;
             }
             
            }while(opc1!=1); 
    break;}
        case 2:{
         Curso c1;

         cout<<"Escoja una opc: "<<endl;
         cout<<"1. Ingresar notas "<<endl;
         cout<<"2. Visualizar informacion "<<endl; 
         
         cout<<"\nOpcion: ";
         cin>>menu;
         cout<<endl;
         
         switch(menu){
         case 1:{
            c1.ingresarNotas();
        break;}
        
        
         case 2:{
         cout<<"1. Visualizar codigo del curso "<<endl;
         cout<<"2. Visualizar nombre del curso "<<endl;
         cout<<"3. Visualizar creditos de asignaturas "<<endl;
         cout<<"4. Visualizar Notas del estudiante "<<endl;
         cout<<"5. Salir "<<endl;    
          
         cout<<"\nOpcion: ";
         cin>>menu;
         cout<<endl;
         
         switch(menu){ 
            
            case 1:{
            c1.codigocurso();
            break;}
            case 2:{
            c1.nombrecurso();
            break;}
            case 3:{
            c1.creditosAsignatura();
            break;}
            case 4:{
            c1.notasCurso();
            break;}
             }
          }
        }
           do{
             cout<<"\n1. Volver al menu principal: "<<endl;
             cout<<"\nOpcion: ";
             cin>>opc1;
             switch(opc1)
             {
               case 1:
                system("clear");
               break;
             }
             
            }while(opc1!=1); 
    break;}         
         
         case 3:{
          
          modificar_informacion();
          
    break;}
         case 4:{
            
            eliminar_materia();
            
    break;}
         case 5:{
            
            promedio_estudiante();
                     
    break;}
    }
}while(menu!=6);
    
    return 0;
}

void modificar_informacion(){
    
    cout<<"Escoja que materia desea modificar "<<endl;
    cout<<"1. Matematicas "<<endl;
    cout<<"2. Fisica "<<endl;
    cout<<"3. Sistemas "<<endl;
    cout<<"4. Biologia "<<endl;
    
    cout<<"\nOpcion: ";
    cin>>modificar_materia;
    cout<<endl;
    
    
    switch(modificar_materia){
    
    case 1:
             cout<<"Ingrese la nueva nota para matematicas: "; 
             cin>>matematicas;
             cout<<"la materia fue modificada con exito. "<<endl;
             do{
             cout<<"\n1. Volver al menu principal: "<<endl;
             cout<<"\nOpcion: ";
             cin>>opc1;
             switch(opc1)
             {
               case 1:
                system("clear");
               break;
             }
             
            }while(opc1!=1);
    break;
    
    case 2:
             cout<<"Ingrese la nueva nota para fisica: "; 
             cin>>fisica;
             cout<<"la materia fue modificada con exito. "<<endl;
             do{
             cout<<"\n1. Volver al menu principal: "<<endl;
             cout<<"\nOpcion: ";
             cin>>opc1;
             switch(opc1)
             {
               case 1:
                system("clear");
               break;
             }
             
            }while(opc1!=1);
    break;
    
    case 3:
             cout<<"Ingrese la nueva nota para sistemas: "; 
             cin>>sistemas;
             cout<<"la materia fue modificada con exito. "<<endl;
             do{
             cout<<"\n1. Volver al menu principal: "<<endl;
             cout<<"\nOpcion: ";
             cin>>opc1;
             switch(opc1)
             {
               case 1:
                system("clear");
               break;
             }
             
            }while(opc1!=1);
    break;
    
    case 4:
             cout<<"Ingrese la nueva nota para biologia: "; 
             cin>>biologia;
             cout<<"la materia fue modificada con exito. "<<endl;
             do{
             cout<<"\n1. Volver al menu principal: "<<endl;
             cout<<"\nOpcion: ";
             cin>>opc1;
             switch(opc1)
             {
               case 1:
                system("clear");
               break;
             }
             
            }while(opc1!=1);
    break;
    }         
}

void eliminar_materia(){
    
    cout<<"Escoja que materia desea modificar "<<endl;
    cout<<"1. Matematicas "<<endl;
    cout<<"2. Fisica "<<endl;
    cout<<"3. Sistemas "<<endl;
    cout<<"4. Biologia "<<endl;
    
    cout<<"\nOpcion: ";
    cin>>cancelar_materia;
    cout<<endl;
    
    
    switch(cancelar_materia){
    
    case 1:
             matematicas = 0;
             cout<<"la materia fue cancelada con exito. "<<endl;
             do{
             cout<<"\n1. Volver al menu principal: "<<endl;
             cout<<"\nOpcion: ";
             cin>>opc1;
             switch(opc1)
             {
               case 1:
                system("clear");
               break;
             }
             
            }while(opc1!=1);
    break;
    
    case 2:
             fisica = 0;
             cout<<"la materia fue cancelada con exito. "<<endl;
             do{
             cout<<"\n1. Volver al menu principal: "<<endl;
             cout<<"\nOpcion: ";
             cin>>opc1;
             switch(opc1)
             {
               case 1:
                system("clear");
               break;
             }
             
            }while(opc1!=1);
    break;
    
    case 3:
             sistemas = 0;
             cout<<"la materia fue cancelada con exito. "<<endl;
             do{
             cout<<"\n1. Volver al menu principal: "<<endl;
             cout<<"\nOpcion: ";
             cin>>opc1;
             switch(opc1)
             {
               case 1:
                system("clear");
               break;
             }
             
            }while(opc1!=1);
    break;
    
    case 4:
             biologia = 0;
             cout<<"la materia fue cancelada con exito. "<<endl;
             do{
             cout<<"\n1. Volver al menu principal: "<<endl;
             cout<<"\nOpcion: ";
             cin>>opc1;
             switch(opc1)
             {
               case 1:
                system("clear");
               break;
             }
             
            }while(opc1!=1);
    break;
    }         
}

void promedio_estudiante(){
    
    float operacion;
    operacion = (matematicas + biologia + sistemas + fisica );
    operacion = (operacion/4);
    cout<<"El promedio es: "<<operacion;
    cout<<endl;
    do{
             cout<<"\n1. Volver al menu principal: "<<endl;
             cout<<"\nOpcion: ";
             cin>>opc1;
             switch(opc1)
             {
               case 1:
                system("clear");
               break;
             }
             
    }while(opc1!=1);
}
