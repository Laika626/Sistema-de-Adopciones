#include <iostream>
#include <vector>
#include <string>
#include <limits>
#include "Mascota.h"
#include "Persona.h"
#include "rescatista.h"
#include "adoptante.h"
#include "adopcion.h"
#include "utils.h"


Rescatista crearRescatista() {
    std::string nombre;
    std::string telefono;
    std::string correoElectronico;
    std::string direccion;
    double cuotaDeRecuperacion;

    std::cout << "Dame el nombre de la persona: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin, nombre);

    std::cout << "Dame el Telefono de la persona: ";
    std::getline(std::cin, telefono);

    std::cout << "Dame el correo electronico de la persona: ";
    std::getline(std::cin, correoElectronico);

    std::cout << "Dame la direccion de la persona: ";
    std::getline(std::cin, direccion);

    std::cout << "Dame la cuota de recuperacion de la persona: ";
    std::cin >> cuotaDeRecuperacion;

    Rescatista rescatista = Rescatista(
        nombre,
        telefono,
        correoElectronico,
        direccion,
        cuotaDeRecuperacion);
    return rescatista;
}

Adoptante crearAdoptante() {
    std::string nombre;
    std::string telefono;
    std::string correoElectronico;
    std::string direccion;
    std::string ocupacion;
    std::string tipoVivienda;

    std::cout << "Dame el nombre de la persona: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin, nombre);

    std::cout << "Dame el Telefono de la persona: ";
    std::getline(std::cin, telefono);

    std::cout << "Dame el correo electronico de la persona: ";
    std::getline(std::cin, correoElectronico);

    std::cout << "Dame la direccion de la persona: ";
    std::getline(std::cin, direccion);

    std::cout << "Dame la ocupacion de la persona: ";
    std::getline(std::cin, ocupacion);

    std::cout << "Dame el tipo de vivienda de la persona: ";
    std::getline(std::cin, tipoVivienda);


    Adoptante adoptante = Adoptante(
        nombre,
        telefono,
        correoElectronico,
        direccion, ocupacion,
        tipoVivienda);
    return adoptante;
}

Mascota crearMascota() {
    std::string nombre;
    std::string sexo;
    std::string tipoMascota;
    int edadMeses;
    std::string size;
    std::string auxConviveConNinos;
    bool conviveConNinos;
    std::string auxConviveConOtrasMascotas;
    bool conviveConOtrasMascotas;
    bool adoptado;

    std::cout << "Dame el nombre de la Mascota: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin, nombre);

    std::cout << "Dame el sexo de la Mascota: ";
    std::getline(std::cin, sexo);

    std::cout << "Dame el tipo de la Mascota: ";
    std::getline(std::cin, tipoMascota);

    std::cout << "Dame la edad de la Mascota en meses: ";
    std::cin >> edadMeses;

    do {
        std::cout << "Dame el tamaño de la Mascota (xs, s, m, l, xl, xxl): ";
        std::getline(std::cin, size);
    } while (size != "xs" &&
        size != "s" &&
        size != "m" &&
        size != "xl" &&
        size != "xxl");

    do {
        std::cout << "La Mascota convive con niños: ";
        std::getline(std::cin, auxConviveConNinos);
        if (auxConviveConNinos == "si") {
            conviveConNinos = true;
        } else {
            conviveConNinos = false;
        }
    } while (auxConviveConNinos != "si" && auxConviveConNinos != "no");

    do {
        std::cout << "La Mascota convive con otros animales: ";
        std::getline(std::cin, auxConviveConOtrasMascotas);
        if (auxConviveConOtrasMascotas == "si") {
            conviveConOtrasMascotas = true;
        } else {
            conviveConOtrasMascotas = false;
        }
    } while (auxConviveConOtrasMascotas != "si" &&
        auxConviveConOtrasMascotas != "no");

    return Mascota(
        nombre,
        sexo,
        tipoMascota,
        edadMeses,
        size,
        conviveConNinos,
        conviveConOtrasMascotas);
}

EstudioAdopcion llenarEstudio() {
    std::string fecha;
    std::string lugar;
    int hijos;
    int mascotasExistentes;
    int tiempoParaMascotas;
    std::string actividadFisica;

    std::cout << "Fecha: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin, fecha);

    std::cout << "Lugar de la adopcion: ";
    std::getline(std::cin, lugar);

    std::cout << "Cantidad de hijos de los adoptantes: ";
    std::cin >> hijos;

    std::cout << "Cantidad de mascotas que tienen los adoptantes: ";
    std::cin >> mascotasExistentes;

    std::cout << "Cantidad de tiempo que se le dedicara a la mascota: ";
    std::cin >> tiempoParaMascotas;

    std::cout << "Nivel de actividad fisica de la persona (B, M, A): ";
    std::getline(std::cin, actividadFisica);

    return EstudioAdopcion(
        fecha,
        lugar,
        hijos,
        mascotasExistentes,
        tiempoParaMascotas,
        actividadFisica);
}

int main() {
    int opcion = -1;
    std::vector<Rescatista> rescatistas;
    std::vector<Mascota> mascotas;
    std::vector<Adoptante> adoptantes;
    std::vector<Adopcion> adopciones;

    do {
        do {
            clearScreen();
            std::cout << "Menu de opciones" << std::endl;
            std::cout << "1) Dar de alta Rescatista" << std::endl;
            std::cout << "2) Listar Rescatistas" << std::endl;
            std::cout << "3) Modificar Rescatistas" << std::endl;
            std::cout << "4) Dar de alta Mascota" << std::endl;
            std::cout << "5) Listar Mascotas" << std::endl;
            std::cout << "6) Modificar Mascota" << std::endl;
            std::cout << "7) Dar de alta Adoptante" << std::endl;
            std::cout << "8) Listar Adoptantes" << std::endl;
            std::cout << "9) Modificar Adoptantes" << std::endl;
            std::cout << "10) Llenar aplicacion de adopcion" << std::endl;
            std::cout << "11) Listar aplicaciones de adopcion" << std::endl;
            std::cout << "11) Modificar status de adopcion" << std::endl;
            std::cout << "20) Salir" << std::endl;
            std::cout << "Selecciona una opcion: ";
            std::cin >> opcion;
        } while (opcion < 1 || opcion > 20);

        switch (opcion) {
        case 1:
        {
            rescatistas.push_back(crearRescatista());
            break;
        }
        case 2:
        {
            std::cout << "Seleccionaste opcion 2" << std::endl;
            std::cout << std::endl;
            for (int i = 0; i < rescatistas.size(); i++) {
                std::cout << rescatistas[i].getNombre() << std::endl;
                std::cout << rescatistas[i].getCuotaRecuperacion() << std::endl;
                std::cout << std::endl;
            }
            esperar();
            break;
        }
        case 3:
        {
            std::cout << "Que rescatista quieres modificar" << std::endl;

            for (int i = 0; i < rescatistas.size(); i++) {
                std::cout << i << rescatistas[i].getNombre() << std::endl;
            }
            int rescatistaElegido;
            std::cin >> rescatistaElegido;

            rescatistas[rescatistaElegido].menuModificacionRescatista();
            esperar();
            break;
        }
        case 4:
        {
            mascotas.push_back(crearMascota());
            break;
        }
        case 5:
        {
            std::cout << "Seleccionaste opcion 5" << std::endl;
            std::cout << std::endl;
            for (int i = 0; i < mascotas.size(); i++) {
                std::cout << mascotas[i].getNombre() << std::endl;
                std::cout << mascotas[i].getEdadMeses() << std::endl;
                std::cout << std::endl;
            }
            esperar();
            break;
        }
        case 6:
        {
            std::cout << "A cual mascota quieres modificar" << std::endl;

            for (int i = 0; i < mascotas.size(); i++) {
                std::cout << i << mascotas[i].getNombre() << std::endl;
            }
            int mascotaElegida;
            std::cin >> mascotaElegida;

            mascotas[mascotaElegida].menuModificacionMascota();
            esperar();
            break;
        }
        case 7:
        {
            adoptantes.push_back(crearAdoptante());
            break;
        }
        case 8:
        {
            std::cout << "Seleccionaste opcion 8" << std::endl;
            std::cout << std::endl;
            for (int i = 0; i < adoptantes.size(); i++) {
                std::cout << adoptantes[i].getNombre() << std::endl;
                std::cout << adoptantes[i].getOcupacion() << std::endl;
                std::cout << std::endl;
            }
            esperar();
            break;
        }
    case 9:
        {
            std::cout << "A cual Adoptante quieres modificar" << std::endl;

            for (int i = 0; i < adoptantes.size(); i++) {
                std::cout << i << adoptantes[i].getNombre() << std::endl;
            }
            int adoptanteElegido;
            std::cin >> adoptanteElegido;
            adoptantes[adoptanteElegido].menuModificacionAdoptante();
            esperar();
            break;
        }
    case 10:
        {
            std::cout << "Que adoptante llenara la aplicacion de adopcion: ";
            std::cout << std::endl;
            for (int i = 0; i < adoptantes.size(); i++) {
                std::cout << i << adoptantes[i].getNombre() << std::endl;
            }
            int adoptanteElegido;
            std::cin >> adoptanteElegido;

            std::cout << "Para que mascota se quiere llenar4 la aplicacion: ";
            std::cout << std::endl;
            for (int i = 0; i < mascotas.size(); i++) {
                std::cout << i << mascotas[i].getNombre() << std::endl;
            }
            int mascotaElegida;
            std::cin >> mascotaElegida;

            std::cout << "Que rescatista hara la adopcion: " << std::endl;
            for (int i = 0; i < rescatistas.size(); i++) {
                std::cout << i << rescatistas[i].getNombre() << std::endl;
            }
            int rescatistaElegido;
            std::cin >> rescatistaElegido;


            EstudioAdopcion estudio = llenarEstudio();
            std::string auxStatus;
            std::cout << "Status(aprobada, rechazada, en proceso): ";
            std::getline(std::cin, auxStatus);

            Adopcion auxAdopcion = Adopcion(
                adoptantes[adoptanteElegido],
                mascotas[mascotaElegida],
                rescatistas[rescatistaElegido],
                estudio,
                auxStatus);
            adopciones.push_back(auxAdopcion);

            esperar();
            break;
        }
        case 11:
        {
            std::cout << "Seleccionaste opcion 11" << std::endl;
            std::cout << std::endl;
            for (int i = 0; i < adopciones.size(); i++) {
                adopciones[i].imprimirAdopcionLight();
            }
            esperar();
            break;
        }
        case 12:
        {
            std::cout << "Cual adopcion quieres modificar" << std::endl;

            for (int i = 0; i < adopciones.size(); i++) {
                std::cout << i << " ";
                adopciones[i].imprimirAdopcionLight();
                std::cout << std::endl;
            }
            int adopcionElegida;
            std::cin >> adopcionElegida;
            adopciones[adopcionElegida].modificacionStatusAdopcion();
            esperar();
            break;
        }
        case 20:
            break;
        default:
            break;
        }
    } while (opcion != 20);

    return 0;
}
