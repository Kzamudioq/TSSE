# Driver	de	LEDs	:	Test 💡🧪


## Descripción
Este repositorio contiene el desarrollo de una API para controlar LEDs utilizando la metodología de Desarrollo Guiado por Pruebas (Test Driven Development - TDD). La API permite manejar 16 LEDs de dos estados (encendido y apagado), cambiar el estado de un LED individual sin afectar a los demás, cambiar el estado de todos los LEDs en una sola operación y recuperar el estado actual de un LED.

## Requerimientos del Driver

1. ¡Controla 16 lucesitas!
2. ¡Cambia el estado de una sin meter la pata con las demás!
3. ¡Cambia todas de una vez!
4. ¡Conoce cómo están cada una de las luces en este momento!
5. Las luces están mapeadas en un mega-hyper-ultra-bit en la memoria.
6. Para prender una luz, hay que ponerle un 1, para apagarla, un 0.
7. La primera luz es la más flojita, y la última la más fuerte.
8. Si el aparatico se resetea, ¡todas las luces deben estar apagadas!

## Uso del Repo
¡Sencillo, amiguín! Este repositorio usa pre-commit para chequear el formato y ceedling para correr las pruebas. Así que, sigue estos pasos en tu superordenador:

### Instalación de pre-commit
```bash
pip install pre-commit
pre-commit install
```
### Instalación de pre-commit
```bash
choco install ruby -y
gem install ceedling
```
### Instalación de pre-commit
```bash
ceedling
```

## Estructura del Repositorio
- `src:` acá están los archivos mágicos que hacen funcionar todo.
- `inc:` acá están los archivos mágicos que hacen funcionar todo.
- `test:` ¡Aquí se esconden las pruebas de magia!
- `vendor:` un lugar opcional para meter librerías chéveres.
- `README.md:` Este archivo, ¡donde empieza toda la diversión!


## Contribuciones

¡Estamos más felices que un Minion en Bananalandia de recibir tus contribuciones! ¡Crea un "pull request" en GitHub para proponer tus cambios!
