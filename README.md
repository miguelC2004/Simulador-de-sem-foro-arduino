# Control de Semáforo con Arduino y Python

Este proyecto consiste en el control de un semáforo utilizando un Arduino y un programa en Python. El Arduino controla las luces del semáforo (rojo, amarillo y verde) y responde a comandos enviados desde el programa en Python a través de la comunicación serie.

## Archivos

- `semaphore_control.ino`: El archivo de código de Arduino que controla las luces del semáforo y espera comandos desde el programa en Python a través del puerto serie.

- `control_semaforo.py`: El script de Python que permite al usuario enviar comandos al Arduino para controlar las luces del semáforo. Se establece una conexión serial con el Arduino para enviar los comandos.

## Uso

1. Cargar el código `semaphore_control.ino` en el Arduino utilizando el entorno de desarrollo de Arduino.

2. Conectar el Arduino a una PC a través del puerto USB.

3. Ejecutar el script de Python `control_semaforo.py`. Favor de tener la biblioteca PySerial instalada.

4. Las instrucciones en la consola del script de Python para enviar comandos al Arduino ('R' para luz roja, 'Y' para luz amarilla, 'G' para luz verde, 'Q' para salir).

## Requisitos

- Arduino con puerto USB.
- Python 3.x instalado en tu PC.
- Biblioteca PySerial para Python. Puedes instalarla usando `pip install pyserial`.
