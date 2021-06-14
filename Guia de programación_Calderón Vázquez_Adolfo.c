/*Programación 3 Departamental:
Guía de programación
Calderón Vázquez Adolfo Ángel 4IV17*/
 #include <stdio.h>
 int main()
 {
   int tema;
   printf("\n   Guía de programacion \n\n");
   printf("\n 1.  Memoria RAM");
   printf("\n 2.  Codigo ASCII");
   printf("\n 3.  Operaciones");
   printf("\n 4.  Par o impar");
   printf("\n 5.  Vocal o letra");
   printf("\n 6.  Formato de hora");
   
   
   printf("\n Escribe el número del tema que deseas ver");
   scanf("%d", &tema);

   switch(tema) // switch nos da a elegir una opción
   {
     case 1: // swith nos marca que van a haber opciones a elegir y case es el caso
             printf("\n\n La memoria RAM es la memori principal de un");
             printf("\n dispositivo, esa donde se almacenan de forma temporal los datos de los programas");
             printf("\n que estás utilizando en este momento. Sus siglas significan Random Access Memory,");
             printf("\n lo que traducido al español sería Memoria de Acceso Aleatorio, y es un tipo de memoria");
             printf("\n que te puedes encontrar en cualquier dispositivo, desde ordenadores de sobremesa hasta teléfonos móviles");
             break; // break nos quiere decir romper, que sirve para regresar y que no se vaya de corrido.
     case 2: 
             printf("\n sistema de codificación de caracteres de siete bits utilizado inicialmente en los calculadores. ");
             break;
     case 3: 
             int a, b, c; // Se declaran las variables
             printf("\n Este programa sirve para hacer operaciones");
             printf("\n Por ejemplo, menciona Un valor a :");
             scanf("%d", &a);
             printf("\n Ahora menciona un valor b :");
             scanf("%d", &b);
             printf("\n Por último, menciona un valor c:");
             scanf("%d", &c);
             a = a+1; // al valor de a  se le suma 1 unidad debido al operador +
             b = b*2; // al valor de b se multiplica por 2 debido al operador * 
             c = c*c; // al valor de c se le  multiplica el mismo valor de c debido al operador *
            printf("\n Ahora el valor de a es %d", a);
            printf("\n Ahora el valor de b es %d", b);
            printf("\n Ahora el valor de c es %d", c);
            break;
     case 4:
            int numero ;
            printf("\n Introduce un numero");
            scanf("%d", &numero);
   
            if( numero%2 == 0) // if nos dice que hay una condicion 
            {
            printf("\n El numero es PAR");
             }
            else // else es en caso de que la condicion de if no se cumpla
            {
            printf("\n El numero es IMPAR");
            }
            break;
     case 5: 
             char letra;
            printf("\n Introduce una letra");
           scanf("%d", &letra);
   
           if( (letra == 'a' || letra == 'A') ||
           (letra == 'e' || letra == 'E') ||
           (letra == 'i' || letra == 'I') || // se ponen las letras en mayusculas
           (letra == 'o' || letra == 'O') || // o minusculas ya que puede que se pongan
           (letra == 'u' || letra == 'U')    //las 2 formas 
           )
           {
           printf("\n ES UNA VOCAL");
           }
           else // else es cuando no se cumple la condición
           {
           printf("\n NO ES VOCAL");
           } 
            break;
      case 6:
               int hora, minutos, segundos;
               printf("\n Introduce la hora");
               scanf("%d",&hora);
               printf("\n Introduce los minutos");
               scanf("%d", &minutos);
               printf("\n Introduce los segundos");
               scanf("%d", & segundos);

               if( (hora>=0 && hora<=23) &&
               (minutos>=0 && minutos<=59) && // Se muestran distintas condiciones 
              (segundos>=0 && segundos<=59) // de menor o mayor 
              )
              {
              printf("\n El formato de hora es correcto");
              }
              else
              {
               printf("\n El formato de hora es incorrecto");
              }
              break;
            }
            printf("\n Adios");
             return 0;

  }