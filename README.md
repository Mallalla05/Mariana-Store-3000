# Mariana-Store-3000

Este proyecto nos ayuda a tener el control sobre un inventario de una tienda o abarrotes en la que podemos encontrar los produtos que normalmente utilizamos  los cuales tendran dentro de esta lista el nombre del producto, la catengoria en la que se encuentra ademas de su precio y el  número disponible de piezas de este articulo,estas caracteristicas ayudaran a desde el programa poder visualizar el inventario final ademas de poder ordenarlo por orden alfabetico y de cantidad asi facilitando la busqueda y el saber la existencia de ello.
Otro de las funcionalidades es poder agregar nuevos productos y actualizar la lista de inventario.


**Funcionamientos principales:**

**Agregar Producto:**

-Nos deja ingresar un nuevo producto siempre y cuando se especifique su nombre,categoria,precio y cantidad.
-Los productos se guardan en la lista doblemente enlazada para que sea mas rapida y flexible.


**Mostrar Inventario:**
- Imprime y muestra los productos registrados en el archivo .txt  con sus atributos: nombre, categoría, precio y cantidad.

**Ordena Productos:**

- Por Nombre y Cantidad  para ordenar de manera eficiente.
  
**Flujo de Datos:**
- Al iniciar el programa, los productos se cargan automáticamente desde un archivo 
- El programa actualiza el archivo con los nuevos productos al finalizar.
-Se debe de seguir el formato del archivo.

**Manejo de archivos:**

-Lectura y Escritura en el archivo .txt

**SICT0302B: Toma decisiones:**

<ins>Selecciona y usa una estructura de datos adecuada al problema y lo usa correctamente. </ins>

Se utiliza la  lista doblemente enlazada para poder tener mejor gestión de los productos del inventario pues nos da un  rápido acceso al inicio (head) y al final (tail),lo que deja recorrer en ambas direcciones ya sea inicio o el fin,ya que se permite agregar un producto con tail y mostrar los productos recorriendo todos los nodos para poder imprimir el inventario.


<ins>Selecciona un algoritmo de ordenamiento adecuado al problema y lo usa correctamente. </ins>

En cuanto a método de ordenamiento lo que se utilizó en este proyecto es la función de merge sort ya que es la mejor cuando se trata de lista s largas ya que se implementó para poder ordenar por nombre o la cantidad de productos,es decir mergeSortNombre y mergeSortCantidad,las cuales dividen la lista en mitades y cada una la ordenan de forma recursiva para después juntarlas.


**SICT0301B: Evalúa los componentes**

<ins>Hace un análisis de complejidad correcto y completo para los algoritmos de ordenamiento usados en el programa: </ins>

-Merge sort: O(n log n) pues divide,ordena y combina las listas.

-Lista doblemente enlazada:

-Agregar producto: O(1) ya que no se recorre toda la lista.
 
-Mostrar productos: O(n) pues va de nodo a nodo.
 
-Carga de archivos: O(n) procesa un nodo por línea del archivo.
 
-Guardar datos de archivo: O(n) procesa un nodo por línea que se escriba.












 

-Complejidad espacial total del programa:O(n) O(n log n)

-Complejidad temporal total del programa: O(n log n)


**SICT0303B: Implementa acciones científicas**

<ins>Implementa mecanismos para consultar información de las estructuras correctamente </ins>
El programa proporciona mecanismos claros y efectivos para consultar información almacenada en la lista doblemente enlazada:

1. Mostrar productos:
2. Ordenar productos:

<ins>Implementa mecanismos de lectura de archivos para cargar datos a las estructuras de manera correcta</ins>
El programa carga los datos que se encuentran en los archivos.

1. Abre el archivo `Productos.txt` 
2. Función `cargarDesdeArchivo.

3.Validación

**Consejos:**

-Ejecutar desde la terminal para evitar problemas de compiladores.

-Al momento de agregar un nuevo producto colocar bien los valores, es decir, en el precio y cantidad unicamente colocar números y en nombre y categoria letras para que el programa funcione.
