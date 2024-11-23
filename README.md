# Mariana-Store-3000

En dicho proyecto nos ayuda a tener un inventario de una tienda o abarrotes en la que podamos encontrar los produtos que normalmente utilizamos o encontramos los cuales tendran dentro de esta lista el nombre del producto, la catengoria en la que se encuentra ademas de su precio y el  número disponible de piezas de este articulo,estas caracteristicas ayudaran a desde el programa poder visualizar el inventario final ademas de poder ordenarlo por orden alfabetico y de cantidad asi facilitando la busqueda y el saber la existencia de ello.
Otro de las funcionalidades es poder agregar nuevos productos y actualizar la lista de inventario.


**Funcionamientos principales:**

**Agregar Producto:**

-Nos deja ingresar un nuevo producto siempre y cuando se especifique su nombre,categoria,precio y cantidad.

-Los productos se guardan en la lista doblemente enlazada para que sea mas rapida y flexible.

-Complejidad 0(1),ya que el programa puede acceder a tail y añade el producto a lo ultimo de la lista sin recorrerla completa.


**Mostrar Inventario:**

-Muestra los productos registrados en el archivo .txt con todas sus atributos.

-Complejidad 0(n),esto pues recorre todos los nodos de la lista doblemente enlazada para imprimir los datos.

**Ordena Productos:**

- Por nombre y cantidad:
  
   -Usa merge sort para ordenar los productos de forma alfabetica,su  complejidad es O(n log n) ya que divide la lista en dos y luego las fusiona.

**Datos:**

-Cuando el programa se inicia los datos del archivo .txt se cargan de forma automatica.

-Se debe de seguir el formato del archivo.

-Cuando el programa acaba los datos de los nuevos productos se guardan en el archivo .txt

**Análisis de complejidad:**

-Ordenamiento:

  -Merge Sort:O(n log n) por las combinaciones recursivas y de fusiones.

-Estructura de datos:

  -Lista doblemente enlazada:

    -Agregar productos: O(1) puestiene acceso directo a tail.

    -Mostrar productos: O(n) recorre todos los nodos.

-Archivos:

  -Lectura y escritura:Las dos son complejidad O(n) pues procesan todos y cada uno de los productos una vez.


**Rubros:**

-SICT0302B: Toma decisiones
En el proyecto elegi el metodo de ordenamiento merge sort por ser eficiente cuando se trabajan en las listas grandes y suele tener mas exactitud en l forma que ordena.

-SICT0301B: Evalúa los Componentes
Ordenamiento O(n log n) y las inserciones O(1).

-SICT0303B: Implementa Acciones Científicas
Con el programa lo que podemos hacer en el inventario es ordenar y registrar los productos de una forma que sea efectiva y rápida.

**Consejos:**

-Ejecutar desde la terminal para evitar problemas de compiladores.

-Al momento de agregar un nuevo producto colocar bien los valores, es decir, en el precio y cantidad unicamente colocar números y en nombre y categoria letras para que el programa funcione.
