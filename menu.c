#include <stdio.h>
#include <string.h>

struct Persona
{

    char nombre[50];
    char apellido[50];
    char pais[20];
    int tlf;
    char direccion[100];
    char mail[50];
    char contra[20];
};

struct tarjeta
{

    int numero;
    int mes;
    int agno;
    char nombre[50];
    char apellido[50];
};

struct metodopago
{

    int opcion;
    char usuario[100];
    char password[100];
};

typedef struct
{

    char origen[20], destino[20], clase[20];
    int precio;
    char idayvuelta[20];
    int peso;

} Vuelo;

int buscarVuelo(Vuelo buscado, Vuelo encontrados[])
{

    FILE *pfvuelos;
    Vuelo vuelo;

    int totalEncontrados = 0;
    pfvuelos = fopen("vuelos.txt", "r");

    if (pfvuelos == NULL)
    {

        printf("Error al abrir el archivo \n");

        return 0;
    }

    while (!feof(pfvuelos))
    {

        fscanf(pfvuelos, "%s %s %s %s %d", vuelo.origen, vuelo.destino, vuelo.idayvuelta, vuelo.clase, &vuelo.precio);

        vuelo.peso = 0;

        if (strcmp(vuelo.origen, buscado.origen) == 0)
        {

            vuelo.peso++;
        }

        if (strcmp(vuelo.destino, buscado.destino) == 0)
        {

            vuelo.peso++;
        }

        if (strcmp(vuelo.clase, buscado.clase) == 0)
        {

            vuelo.peso++;
        }

        if (strcmp(vuelo.idayvuelta, buscado.idayvuelta) == 0)
        {

            vuelo.peso++;
        }

        if (vuelo.precio <= buscado.precio)

        {

            vuelo.peso++;
        }

        if (vuelo.peso >= 4)
        {

            encontrados[totalEncontrados] = vuelo;

            totalEncontrados++;
        }
    }

    fclose(pfvuelos);

    return totalEncontrados;
};

// Procesar pago
void procesarPago() {
    struct metodopago pago;

    struct tarjeta info;

    printf("seleccione mï¿½todo de pago 1.VISA o 2.PAYPAL\n");

    scanf("%d", &pago.opcion);

    system("cls");

    switch (pago.opcion)

    {

    case 1:

        printf("Introduzca su nombre\n");

        scanf("%s", info.nombre);

        printf("Introduzca sus apellidos\n");

        scanf("%s", info.apellido);

        printf("introduzca el numero de la tarjeta\n");

        scanf("%i", &info.numero);

        printf("Introduzca fecha de caducidad de su tarjeta\n");

        printf("Mes\t");

        scanf("%i", &info.mes);

        printf("Anio\t");

        scanf("%i", &info.agno);

        system("cls");

        printf("Pago realizado con exito\n");

        printf("le hemos reenviado un correo con los datos del pedido\n");

        printf("Gracias por confiar en Flying Cheap y esperemos que disfrute de sus vacaciones y vuelva pronto\n");

        printf("\n");

        printf("\n");

        break;

    case 2:

        printf("introduzca su usuario de paypal\n");

        scanf("%s", pago.usuario);

        printf("Introduzca su contrasena:\n");

        scanf("%s", pago.password);

        system("cls");

        printf("Pago realizado con exito\n");

        printf("le hemos reenviado un correo con los datos del pedido\n");

        printf("Gracias por confiar en Flying Cheap y esperemos que disfrute de sus vacaciones y vuelva pronto\n");

        printf("\n");

        printf("\n");

        break;
    }
}

int main()
{
    FILE *resultados;

    int arroba = 0, punto = 0;

    struct Persona persona;

    Vuelo buscado;

    Vuelo encontrados[50];

    Vuelo seleccionado;

    int opcion1, i, opcion, asiento, tarjeta, a = 0;

    int totalEncontrados;
    int vueloElegido;

    char apellido[10];

    float peso, precio;

    do
    {
		printf(" ___________.__         .__                 _________ .__                           \n");
		printf(" \\_   _____/|  | ___.__.|__| ____    ____   \\_   ___ \\|  |__   ____ _____  ______   \n");
		printf("  |    __)  |  |<   |  ||  |/    \\  / ___\\  /    \\  \\/|  |  \\_/ __ \\\\__  \\ \\____ \\  \n");
		printf("  |     \\   |  |_\\___  ||  |   |  \\/ /_/  > \\     \\___|   Y  \\  ___/ / __ \\|  |_> > \n");
		printf("  \\___  /   |____/ ____||__|___|  /\\___  /   \\______  /___|  /\\___  >____  /   __/  \n");
		printf("      \\/         \\/             \\//_____/           \\/     \\/     \\/     \\/|__|     \n");

        printf("Gracias por elegirnos!!! Estamos seguros de que vamos a encontrar las mejores vacaciones de su vida!!\n");
        printf("Let's start!!!\n");
        printf("Seleccione una de las dos opciones\n");
        printf("1.Registrarse\n");
        printf("2.Iniciar Sesion\n");

        scanf("%d", &opcion1);

        if (opcion1 == 1)

        {

            printf("datos de la persona\n");
            printf("introduzca el nombre\n");

            fflush(stdin);

            gets(persona.nombre);

            printf("introduzca apellido\n");

            gets(persona.apellido);

            printf("introduzca su pais de residencia\n");

            gets(persona.pais);

            printf("introduzca su direccion\n");

            gets(persona.direccion);

            printf("introduzca su tlf\n");

            scanf("%d", &persona.tlf);

            do
            {

                printf("introduzca su mail\n");
                scanf("%s", persona.mail);

                for (i = 0; i < 15; i++)

                {

                    if (persona.mail[i] == '@')
                    {

                        arroba = 1;
                    }

                    if (persona.mail[i] == '.')
                    {

                        punto = 1;
                    }
                }

                if (arroba == 1 && punto == 1)
                {

                    printf("Correo valido\n");
                }
                else
                {

                    printf("Correo invalido\n");
                }

            } while (arroba != 1 && punto != 1);

            printf("introduzca la contrasena\n");

            gets(persona.contra);
        }

        else

        {
            do
            {

                printf("introduzca su mail\n");

                scanf("%s", persona.mail);

                for (i = 0; i < 15; i++)

                {

                    if (persona.mail[i] == '@')
                    {

                        arroba = 1;
                    }

                    if (persona.mail[i] == '.')
                    {

                        punto = 1;
                    }
                }

                if (arroba == 1 && punto == 1)
                {

                    printf("Correo valido");
                }
                else
                {

                    printf("Correo invalido");
                }

            } while (arroba != 1 && punto != 1);

            printf("introduzca su contrasena\n");

            scanf("%s", persona.contra);
        }

        //system("cls");

        printf("BUSQUEDA DE VUELOS\n");

        printf("Introduzca los parametros:\n");

        printf("seleccione un Origen\n");

        printf("Madrid\t Bilbao\t Barcelona\t Cadiz\t ");

        scanf("%s", buscado.origen);

        system("cls");

        printf("Seleccione un Destino\n");

        printf("Londres\t Paris\t Mexico\t NY\t Maldivas\t Vietnam\t ");

        scanf("%s", buscado.destino);

        printf("Eliga bilete de ida o ida y vuelta\n");

        scanf("%s", buscado.idayvuelta);

        printf("Clase Turista Bussines\n");

        scanf("%s", buscado.clase);

        //ahora introduciremos el filtro del rango de precio

        //todas estas selecciones se iran guardando para buscar en un fichero el vuelo que mejor se adapte

        printf("seleccione el precio maximo del vuelo\n");

        scanf("%d", &buscado.precio);

        totalEncontrados = buscarVuelo(buscado, encontrados);

        if (totalEncontrados == 0)
        {

            printf("\n No se encontro ningun vuelo  \n");
        }

        else
        {

            printf("\n Se encontraron los siguientes vuelos: \n");
        }

        for (i = 0; i < totalEncontrados; i++)
        {

            printf("%d) %s  %s  %s  %s %d\n ", i, encontrados[i].origen, encontrados[i].destino, encontrados[i].idayvuelta, encontrados[i].clase, encontrados[i].precio);
        }

        printf("escriba las caracteristicas de su vuelo seleccionado\n");

        scanf("%d", &vueloElegido);

        resultados = fopen("resultados.txt", "w");

        if (resultados == NULL)
        {

            printf("Error al abrir el archivo \n");

            return 0;
        }

        fprintf(resultados, "%s %s %s %s %d\n", encontrados[vueloElegido].origen, encontrados[vueloElegido].destino, encontrados[vueloElegido].idayvuelta, encontrados[vueloElegido].clase, encontrados[vueloElegido].precio);

        do

        {

            printf("¿Quiere añadir algun extra a su vuelo?\n");

            scanf("%d", &i);

            if (i == 1)

            {

                printf("\t1.coche de alquiler\t 2.maletas\t 3.asientos\t 4.Transporte desde el aeropuerto\t");
                scanf("%d", &opcion);

                switch (opcion)

                {

                case 1:

                    printf("Ha añadido a la compra Coche de alquiler\n");
                    fprintf(resultados, "Ha añadido a la compra Coche de alquiler\n");
                    break;

                case 2:

                    printf("introduzca el peso de la maleta\n");

                    scanf("%f", &peso);

                    printf("la maleta seleccionada ha sido añadida a su vuelo\n");
						fprintf(resultados,"la maleta seleccionada ha sido añadida a su vuelo\n");
                    break;

                case 3:

                    printf("Seleccione el numero de asiento que desea\n");

                    scanf("%d", &asiento);

                    printf("su eleccion ha sido guardada\n");
                    fprintf(resultados,"su eleccion de asiento ha sido guardada\n");

                    break;

                case 4:

                    printf("Ha seleccionado trasporte desde el aeropuerto\n");

                    printf("introduzca su apellido para que el conductor le espere con un cartel a la salida de su vuelo\n");

                    scanf("%s", apellido);

                    printf("Su chofer le esperara con el apellido %s\n", apellido);
                    fprintf(resultados,"Su chofer le esperara a la salida del aeropuerto\n");

                    break;
                }
            }

            else
                printf("no ha añadido ningun extra a su vuelo\n");
                fprintf(resultados,"no ha añadido ningún extra a su vuelo\n");

        }

        while (i == 1);

        printf("Procedemos a finalizar su compra\n");

        procesarPago();

        printf("Desea realizar otra busqueda? (1) Si (0) No\n");

        scanf("%d", &i);

    } while (i == 1);

    fclose(resultados);
    printf("Ha salido de la web\n");

    return 0;
}
