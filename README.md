# Sistema de Adopción de Mascotas

Este proyecto implementa un sistema orientado a objetos para administrar el proceso de adopción de mascotas. Incluye manejo de personas involucradas, registro de mascotas, estudios de adopción y control del estado de cada solicitud.
Fue diseñado con base en un modelo UML que define las relaciones entre todas las clases del sistema.

---

## Objetivo del proyecto

Desarrollar un sistema claro, escalable y modular que permita simular y gestionar el proceso completo de adopción, ideal para prácticas académicas de Programación Orientada a Objetos (POO).

---

## Descripción general del sistema

El sistema modela el flujo completo de una adopción:

* Registro de rescatistas, adoptantes y mascotas.
* Gestión de listas de personas y mascotas.
* Creación de un proceso de adopción, que involucra:

  * El rescatista responsable
  * El adoptante interesado
  * La mascota seleccionada
  * Un estudio de adopción
* Modificación del estado de la adopción (aprobada, rechazada o en proceso).

La arquitectura está basada en composición, agregación y herencia para reflejar cómo interactúan las entidades reales dentro de un sistema de adopción.

---

## Clases

* Persona
* Rescatista
* Adoptante
* Mascota
* EstudioAdopcion
* Adopcion
* SistemaAdopcion
* utils (funciones auxiliares)

---
## Estilo de código

El estilo de código fue validado utilizando cpplint con el siguiente commando sobre todos los archivos del directorio:
```
cpplint *
```

Las únicas validaciones descartadas del formato de Google fueron las relacionadas al nombre del header guard.
---

## Estructura general del sistema

El programa está compuesto por múltiples módulos en C++ que representan cada entidad:

* `Persona.h`: Clase base de datos personales.
* `rescatista.h`: Hereda de Persona, representa al rescatista responsable.
* `adoptante.h`: Hereda de Persona, contiene información del adoptante.
* `Mascota.h`: Representa a una mascota disponible para adopción.
* `adopcion.h`: Relaciona adoptante, rescatista y mascota; contiene el estudio de adopción.
* `CentroAdopcion.h`: Incluye la clase EstudioAdopcion.
* `SistemaAdopciones.cpp`: Controlador principal del sistema.
* `utils.h`: Funciones generales de utilidad.

## Explicación del uso de *vectores* en el proyecto

El sistema utiliza `std::vector` para almacenar colecciones dinámicas de objetos, específicamente:

* Lista de rescatistas
* Lista de adoptantes
* Lista de mascotas
* Lista de adopciones

Ejemplo dentro de `SistemaAdopciones.cpp`:

```cpp
vector<Rescatista> rescatistas;
vector<Adoptante> adoptantes;
vector<Mascota> mascotas;
vector<Adopcion> adopciones;
```

El uso de vectores proporciona:

1. **Tamaño dinámico:** A diferencia de los arreglos estáticos, los vectores permiten agregar o eliminar elementos durante la ejecución.
2. **Mayor seguridad:** `std::vector` maneja automáticamente memoria, evitando errores comunes como desbordamientos de arreglos.
3. **Funcionalidad integrada:** Permiten usar métodos como `push_back()`, `erase()`, `size()`, lo que simplifica notablemente la administración de listas.
4. **Compatibilidad con objetos complejos:** Los vectores pueden almacenar objetos completos como `Mascota` o `Rescatista`, lo cual facilita trabajar con ellos sin manejar memoria manualmente.
5. **Iterabilidad:** Es sencillo recorrer los vectores con ciclos `for`, `auto`, o iteradores, facilitando operaciones como búsqueda, impresión y modificación.

Los vectores funcionan como la base para que el sistema pueda crecer conforme se registran nuevas personas, mascotas y adopciones, sin que el programador tenga que preocuparse por la gestión manual del tamaño o memoria del contenedor.

---

## Instalación y ejecución

Para compilar el proyecto:

```
g++ *.cpp -std=c++17 -o adopciones
```

Para ejecutar:

```
./adopciones
```

---

## Funcionamiento general

El sistema se opera mediante menús interactivos que permiten:

* Registrar nuevas personas y mascotas
* Consultar o modificar información
* Iniciar un proceso de adopción
* Capturar un estudio de adopción
* Actualizar el estado de una solicitud

---
  
