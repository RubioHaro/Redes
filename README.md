![Linearity](/LOGO.png)

[![Ask Me Anything !](https://img.shields.io/badge/Ask%20me-anything-1abc9c.svg)](https://github.com/RubioHaro/)
[![PyPI license](https://img.shields.io/pypi/l/ansicolortags.svg)](https://github.com/RubioHaro/Redes/blob/master/LICENSE)

# Redes

Conjunto de dispositivos conectados ya sea por cable, señales, ondas o cualquier medio de transporte de información con el objetivo de compartir información, recursos y servicios. A cada uno de los dispositivos se les denomina nodo.

## Clasificación

### Cobertura

Dependiendo la cobertura, tenemos las redes PAN, LAN, MAN y WAN. Sin embargo las más comunes son:

- LAN
- WAN

### Topología

Tenemos de estrella, Anillo, Bus y Jerárquicas. Es común ver combinaciones de estas redes, en cuyo caso podemos llamarlas "Hibridas". Las más usadas son:

- Jerárquica
- Estrella

## Router

Los routers son conmutadores especiales que cuentan con los mismos componentes básicos que un PC estándar de escritorio (CPU, memoria, bus de sistema y distintas interfaces de entrada y de salida).
El enrutador, direccionador, ruteador o encaminador es un dispositivo de hardware para interconexión de red de ordenadores que opera en la capa tres (nivel de red) y permite asegurar el enrutamiento de paquetes entre redes o determinar la ruta que debe tomar el paquete de datos.

## Direcciones IP

Una dirección IP consiste en 32 bits expresados en forma decimal, en cuatro grupos de tres digitos separados por puntos. Cada número estará entre 0 y 255. Cada número entre los puntos en una dirección IP se compone de 8 dígitos binarios (de de 00000000 a 11111111); los escribimos de forma decimal para hacerlos más comprensibles, pero hay que tener bien claro que la red solo entiende de direcciones binarias 

### Clasificación de direcciones IP

#### Accesibilidad

- IP públicas: visibles por todos los host conectados a internet. No puede haber dos host con la misma dirección IP pública.
- IP privadas: visibles únicamente por los host de su propia red o de otra red privada interconectada por medio de routers. Debido a que estas IP no son visibles desde internet, requieren de un router o proxy que tenga asignada una IP pública para salir.

### Perdurabilidad

- IP estáticas: asignadas de forma fija o permanente a un host determinado, cuando una máquina con este tipo de IP, siempre se conectara a la red con la misma IP. Normalmente usadas por servidores o routers, que requieren estar conectadas a la red de forma permanente.
- IP dinámicas: Aquellas que son asignadas de forma dinámica a los host que desean conectarse a internet y no tienen una IP fija. Por ejemplo, los modem asignan una IP que es valida durante el tiempo que dura la conexión. Cada vez que el usuario se conecte lo hará con una IP distinta.

### Clase

- Redes de clase A: redes que precisan de un gran número de direcciones IP. Soportan al menos 16 millones de direcciones IP, por lo que este tipo de clases corresponden, usualmente, a organismos gubernamentales, o a grandes universidades.
- Redes de clase B: redes que precisan de un número intermedio de direcciones IP. El número de direcciones que permite es de 64,516.
- Redes de clase C: redes que requieren de un número menor de direcciones IP. Estas redes permiten el máximo de 256 direcciones IP por lo que podemos encontrarlas en pequeñas empresas, por ejemplo.

## Modelo OSI

Desarrollado por la Organización Internacional de Estándares (ISO, por sus siglas en ingles) y lanzado en 1984. Este modelo de referencia de Interconexión de Sistemas Abiertos (OSI), estructurado en 7 capas o niveles:

- Aplicación
- Presentación
- Sesión
- Transporte
- Red
- Datos
- Física

## Packet Tracer

Es una herramienta de simulación de redes. Desarrollada por la "CISCO Networking Academy".

Se puede obtener en la página oficial de [CISCO Networking Academy](https://www.netacad.com/courses/packet-tracer).
