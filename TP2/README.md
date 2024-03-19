@Kzamudio ¿Qué te parece el repositorio? ¡Está chido! :+1:

<h1 align="center">
  <p align="center">💡 Driver	de	LEDs	:	Test  💡</p>
  Trabajo práctico 2
</h1>



##  Descripción 

¡Bello bello! Este repo contiene el desarrollo de una API para manejar lucesitas mágicas, ¡sí, LEDs! Todo esto bajo la técnica super cool de Desarrollo Dirigido por Pruebas (Test Driven Development - TDD). La API te permite controlar 16 LEDs con dos modos (encendido y apagado), cambiar el estado de uno sin afectar a los otros, cambiar todos al mismo tiempo y saber el estado actual de cada uno. ¡Qué chulo!

---

<p align="center" width="100%">
    <img width="50%" src="https://github.com/Kzamudioq/TSSE/assets/138271936/53e0fd43-4666-4726-90ff-de5c54dd8c42"> 
</p>

## Requerimientos del Driver

1. ¡Controla 16 lucesitas!
2. ¡Cambia el estado de una sin meter la pata con las demás!
3. ¡Cambia todas de una vez!
4. ¡Conoce cómo están cada una de las luces en este momento!
5. Las luces están mapeadas en un mega-hyper-ultra-bit en la memoria.
6. Para prender una luz, hay que ponerle un 1, para apagarla, un 0.
7. La primera luz es la más flojita, y la última la más fuerte.
8. Si el aparatico se resetea, ¡todas las luces deben estar apagadas!

<p align="center" width="100%">
    <img width="100%" src="https://github.com/Kzamudioq/SOPG/assets/138271936/bb4a8578-0adb-4d01-b9e4-c2181c62017a"> 
</p>

---

## Contenido del Proyecto 🏗️
- `src:` acá están los archivos mágicos que hacen funcionar todo  📂. 
- `inc:` acá están los archivos mágicos que hacen funcionar todo.
- `test:` ¡Aquí se esconden las pruebas de magia!
- `vendor:` un lugar opcional para meter librerías chéveres.
- `README.md:` Este archivo, ¡donde empieza toda la diversión!

## Uso del Repo
¡Sencillo, amiguín! Este repositorio usa pre-commit para chequear el formato y ceedling para correr las pruebas. Así que, sigue estos pasos en tu superordenador:

### Instalación de pre-commit
```bash
pip install pre-commit
pre-commit install
```
### Instalación de ruby y ceedling
```bash
choco install ruby -y
gem install ceedling
```
### compilación de pruebas
```bash
ceedling

Test 'test_leds.c'
------------------
Running test_leds.out...

--------------------
OVERALL TEST SUMMARY
--------------------
TESTED:  12
PASSED:  12
FAILED:   0
IGNORED:  0

```
<p align="center" width="100%">
    <img width="60%" src="https://github.com/Kzamudioq/SOPG/assets/138271936/de274c78-c5b1-4ec7-9dfb-88a55dcb7fcb"> 
</p>



## Contribuciones 🤝

¡Estamos más felices que un Minion en Bananalandia de recibir tus contribuciones! ¡Crea un "pull request" en GitHub para proponer tus cambios!
