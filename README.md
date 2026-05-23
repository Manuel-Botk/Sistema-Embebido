# Sistema Embebido de Alarma de Sueño para Conductores o Estudiantes

Proyecto final de Circuitos Digitales basado en Arduino para la detección de posibles estados de somnolencia mediante un sensor ultrasónico y una alerta visual.

---

## Descripción del proyecto

Este proyecto consiste en el desarrollo de un sistema embebido capaz de detectar cambios de distancia asociados a posibles estados de sueño o pérdida de atención en conductores o estudiantes.

El sistema utiliza un sensor ultrasónico HC-SR04 para medir la distancia entre el usuario y el dispositivo. Cuando el usuario se acerca demasiado al sensor —simulando inclinación de la cabeza o somnolencia— el sistema activa un LED rojo como señal de alerta.

El proyecto fue desarrollado utilizando Arduino Uno y componentes electrónicos básicos, permitiendo implementar un sistema funcional, económico y de fácil integración.

---

## Problemática abordada

La fatiga y la somnolencia representan un problema importante tanto en ambientes académicos como durante la conducción de vehículos.

En estudiantes:
- disminuye la concentración,
- afecta el rendimiento académico,
- incrementa errores por falta de atención.

En conductores:
- reduce la capacidad de reacción,
- incrementa el riesgo de accidentes,
- genera pérdida de atención prolongada.

Muchos sistemas comerciales de monitoreo son costosos y complejos, por lo que este proyecto propone una solución básica y accesible utilizando sistemas embebidos.

---

## Componentes utilizados

| Componente | Cantidad |
|---|---|
| Arduino Uno | 1 |
| Sensor ultrasónico HC-SR04 | 1 |
| LED rojo | 1 |
| Resistencia 220Ω | 1 |
| Protoboard | 1 |
| Jumpers | Varios |
| Cable USB | 1 |

---

## Diagrama de conexiones

| Componente | Conexión Arduino |
|---|---|
| VCC HC-SR04 | 5V |
| GND HC-SR04 | GND |
| TRIG HC-SR04 | Pin 9 |
| ECHO HC-SR04 | Pin 10 |
| LED rojo | Pin 7 |
| GND LED | GND |

---

## Evidencia del circuito

> Agregar aquí imágenes del montaje físico del proyecto.

```bash
/images/diagrama.jpeg
/images/completo3.jpeg
