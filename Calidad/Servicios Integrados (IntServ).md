# IntServ
**Servicios Integrados** o **IntServ** constituyen una arquitectura cuyo cometido es gestionar los recursos necesarios para garantizar [calidad de servicio](https://es.wikipedia.org/wiki/Calidad_de_servicio "Calidad de servicio") (QoS) en una [red de computadores](https://es.wikipedia.org/wiki/Red_de_computadores "Red de computadores"). El concepto que los servicios integrados proponen para cumplir con su cometido, requiere de una nueva arquitectura de protocolos que es difícilmente escalable. Esto se debe a que funciona realizando una reserva extremo a extremo de recursos en los elementos que conforman la red a nivel de aplicación.

Es una arquitectura propuesta para internet en el seno de IETF, con el objeto de dar garantías de QoS a sesiones de aplicación individuales (flujos), basándose en:
* Reserva de recursos
* Control de Adminisión
Cada paquete IP puede asociarse a un flujo.

## Componentes de los Servicios Integrados
[insertar imagen]

## Servicio Garantizado
* Se maneja un nivel de capacidad o tasa de transferencia fija.
### Clases de Servicios Integrados
En relación de Caudal con respecto al tiempo
* Servicio Garantizado
* Servicios de carga controlada
* Mejor Esfuerzo (Best Effort)

# Resource ReSerVation Protocol
Trabaja del destino al origen. El receptor solicita a su router más proximo. El router hace el salto al siguiente router y va haciendo la reserva de recursos. Cuando un router no puede reservar recursos el router previo tiene que buscar una ruta alterna.

Se suele entender como un multicas (múltiples receptores)
## Incovenientes de IntServ
* Escalabilidad: Esta bien para 2 o 3 flujos, cuando la cantidad comienza a incrementar los routers tienen que reservar esos recursos se estén usando o no. (Principal Problema, y razón de su desuso)
* Flexibilidad: No permite definir clases de servicio cualitativamente distintas.