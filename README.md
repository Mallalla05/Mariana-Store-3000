# Mariana-Store-3000

En dicho proyecto nos ayuda a tener un inventario de una tienda o abarrotes en la que podamos encontrar los produtos que normalmente utilizamos o encontramos los cuales tendran dentro de esta lista el nombre del producto, la catengoria en la que se encuentra ademas de su precio y el  número disponible de piezas de este articulo,estas caracteristicas ayudaran a desde el programa poder visualizar el inventario final ademas de poder ordenarlo por orden alfabetico y de cantidad asi facilitando la busqueda y el saber la existencia de ello.
Otro de las funcionalidades es poder agregar nuevos productos y actualizar la lista de inventario.


**Funcionamientos principales:**

***Agregar Producto:***
-Nos deja ingresar un nuevo producto siempre y cuando se especifique su nombre,categoria,precio y cantidad.
-Los productos se guardan en la lista doblemente enlazada para que sea mas rapida y flexible.
-Complejidad 0(1),ya que el programa puede acceder a tail y añade el producto a lo ultimo de la lista sin recorrerla completa.

***Mostrar Inventario:***
-Muestra los productos registrados en el archivo .txt con todas sus atributos.
-Complejidad 0(n),esto pues recorre todos los nodos de la lista doblemente enlazada para imprimir los datos.

***Ordena Productos:***
- Por nombre y cantidad:
   -Usa merge sort para ordenar los productos de forma alfabetica,su  complejidad es O(n log n) ya que divide la lista en dos y luego las fusiona.

***Datos:***
-Cuando el programa se inicia los datos del archivo .txt se cargan de forma automatica.
-Se debe de seguir el formato del archivo.
-Cuando el programa acaba los datos de los nuevos productos se guardan en el archivo .txt

**Análisis de complejidad:**

El ordenamiento de productos usando merge sort O(n log n)
Agregar producto es O(1)
Mostrar productos O(n)

**Rubros:**

-SICT0302B: Toma decisiones
En el proyecto se va a usar Merge Sort para poder ordenar los productos de manera mas rápida.

-SICT0301B: Evalúa los Componentes
Se ueden analisar la complejidad de las funciones del sistema.

-SICT0303B: Implementa Acciones Científicas
Ayuda a implementar el programa para buscar y ordenar los productos.

**Consejos:**

-Ejecutar desde la terminal para evitar problemas de compiladores.
-Al momento de agregar un nuevo producto colocar bien los valores, es decir, en el precio y cantidad unicamente colocar números y en nombre y categoria letras para que el programa funcione.
