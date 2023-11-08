# Control de Semáforo con Arduino y Python

Este proyecto consiste en el control de un semáforo utilizando un Arduino y un programa en Python. El Arduino controla las luces del semáforo (rojo, amarillo y verde) y responde a comandos enviados desde el programa en Python a través de la comunicación serie.

## Archivos

- `semaphore_control.ino`: El archivo de código de Arduino que controla las luces del semáforo y espera comandos desde el programa en Python a través del puerto serie.

- `control_semaforo.py`: El script de Python que permite al usuario enviar comandos al Arduino para controlar las luces del semáforo. Se establece una conexión serial con el Arduino para enviar los comandos.

## Uso

1. Carga el código `semaphore_control.ino` en tu Arduino utilizando el entorno de desarrollo de Arduino.

2. Conecta el Arduino a tu PC a través del puerto USB.

3. Ejecuta el script de Python `control_semaforo.py`. Asegúrate de tener la biblioteca PySerial instalada.

4. Sigue las instrucciones en la consola del script de Python para enviar comandos al Arduino ('R' para luz roja, 'Y' para luz amarilla, 'G' para luz verde, 'Q' para salir).

## Requisitos

- Arduino con puerto USB.
- Python 3.x instalado en tu PC.
- Biblioteca PySerial para Python. Puedes instalarla usando `pip install pyserial`.

## Notas

- Asegúrate de que el Arduino esté conectado al puerto COM correcto (ajusta la variable `arduino_port` en el script de Python si es necesario).

- Los LEDs del semáforo se deben conectar a pines específicos del Arduino, como se indica en el archivo `semaphore_control.ino`.

- El código de Arduino está diseñado para recibir comandos específicos ('R', 'Y' o 'G') para controlar el semáforo.

- Puedes personalizar y expandir este proyecto según tus necesidades.

## Licencia

Este proyecto se distribuye bajo la Licencia [Nombre de la Licencia]. Consulta el archivo LICENSE para obtener más detalles.
