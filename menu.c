#include <stdio.h>
int main()
{
    int opcion1,i,opcion,asiento,pago,tarjeta;
    char apellido[50];
	char usuariocon[100];
    float peso,precio;
    printf("Bienvenido a Flying Cheap.\n");
    printf("Gracias por elegirnos.¡¡Estamos seguros de que vamos a encontrar las mejores vacaciones de su vida!!\n");
    printf("Let's start!!!\n");
  
  
    printf("Seleccione una de las dos opciones\n");
    printf("1.Registrarse\n");
    printf("2.Iniciar Sesion\n");
    scanf("%d",&opcion1);
    if (opcion1==1)
    {
        printf("datos de la persona\n");
        //se rellenará mas adelante
    }
    else
    {
        printf("correo y contraseña\n");
        //se rellenará mas adelante
    }
    //system("cls");
    printf("BUSQUEDA DE VUELOS\n");
    printf("Introduzca los parámetros:\n");
    //Ahora el cliente selecciona el origen del vuelo dentro de una lista de ciudades
    //asi como el destino que puede ser elegido o aleatorio
    //billete de ida o ida y vuelta
    //y la clase: turista,bussines.
    //lo guardaremos todo y pondremos un filtro de precio para que el cliente seleccione hasta que rango.
  
    printf("seleccione un Origen\n");
    do
    {
        printf("1.Madrid\t 2.Bilbao\t 3.Barcelona\t 4.Cádiz\t ");
        scanf("%d",&i);
    }
  
      while(i>=4 && i>=1);
    
    system("cls");
  
    printf("Seleccione un Destino\n");
    do
    {
        printf("1.Londres\t 2.Paris\t 3.Mexico\t 4.NY\t ");
        scanf("%d",&i);
    }
  
      while(i>=4 && i>=1);
      printf("Eliga bilete de 1.ida o 2.ida y vuelta\n");
      scanf("%d",&i);
      printf("Clase 1.Turista 2.Bussines\n");
      scanf("%d",&i);
      //ahora introduciremos el filtro del rango de precio
      //todas estas selecciones se iran guardando para buscar en un fichero el vuelo que mejor se adapte
      printf("seleccione el precio maximo del vuelo\n");
      scanf("%f",&precio);
      if(precio>=100 && precio<=500)
      {
          printf("Hemos encontrado los siguientes vuelos\n");
      }
    else if (precio>=500 && precio<=1000)
     {
        printf("Hemos encontrado los siguientes vuelos");
      
    }  
  
    do
    {
    printf("¿Quiere añadir algun extra a su vuelo?\n");
    scanf("%d",&i);
      
        if(i==1)
        {
  
            printf("1.coche de alquiler\t 2.maletas\t 3.asientos\t 4.Transporte desde el aeropuerto\t");
            scanf("%d",&opcion);
      
                switch (opcion)
                {
                case 1:
                    printf("Ha añadido a la compra Coche de alquiler");
                    break;
                case 2:
                    printf("introduzca el peso de la maleta");
                    scanf("%f",&peso);
                    printf("la maleta seleccionada ha sido añadida a su vuelo");
                    break;
                    case 3:
                    printf("Seleccione el número de asiento que desea");
                    scanf("%d",&asiento);
                    printf("su eleccion ha sido guardada");
                    break;
                case 4:
                    printf("Ha seleccionado trasporte desde el aeropuerto\n");
                    printf("introduzca su apellido para que el conductor le espere con un cartel a la salida de su vuelo\n");
                    scanf("%s",apellido);
                    printf("Su chofer le esperara con el apellido %s",apellido);
                    break;
				}
                  
        //printf(" quiere añadir otro extra?\n");
        //scanf("%d",&i);
           }
        else printf("no ha añadido ningún extra a su vuelo");
    }
   
    while (i==1);
    printf("Procedemos a finalizar su compra\n");
    printf("seleccione método de pago 1.VISA o 2.PAYPAL\n");
    scanf("%d",&pago);
    switch (pago)
    {
	case 1:
    		printf("introduzca el numero de la tarjeta\n");
    		scanf("%d",&tarjeta);
    		printf("Pago realizado con éxito");
    		printf("le hemos reenviado un correo con los datos del pedido\n");
    		printf("Gracias por confiar en Flying Cheap y esperemos que disfrute de sus vacaciones y vuelva pronto\n");
    		break;
    	case 2:
    		printf("introduzca su usuario y contraseña de paypal\n");
    		scanf("%s",usuariocon);
    		printf("Pago realizado con éxito");
    		printf("le hemos reenviado un correo con los datos del pedido\n");
    		printf("Gracias por confiar en Flying Cheap y esperemos que disfrute de sus vacaciones y vuelva pronto\n");
    		break;
	}	
    
    		
    printf("Desea realizar otra busqueda?\n");
    scanf("%d",&i);
    if(i==1)
    {
    	//crear funciones para que vuelva al menu principal
	}
    else 
    printf("Ha salido de la web");
   
    return 0;
    }
