# 🦾 Sistema de Identificación de Movimientos para Prótesis de Mano mediante EMG y Machine Learning

[![Python](https://img.shields.io/badge/Python-3.8+-blue.svg)](https://www.python.org/)
[![Machine Learning](https://img.shields.io/badge/Machine%20Learning-Scikit--learn%20%7C%20TensorFlow-orange)](https://scikit-learn.org/)
[![Embedded](https://img.shields.io/badge/Embedded-PID%20Control-green)]()

> **Aproximación bioinspirada:** reducir la variabilidad en la discriminación de movimientos de la mano usando biopotenciales EMG y control PID, para replicar gestos en una prótesis de bajo costo.

## 📌 Resumen del Proyecto

La ingeniería busca representar sistemas complejos mediante aproximaciones funcionales, como el cuerpo humano. Medir variables como la **electromiografía (EMG)** es posible, pero discriminar movimientos específicos sigue siendo un reto debido a su alta variabilidad. Además, replicar esos movimientos requiere sistemas de control y diseños mecánicos precisos.

Este proyecto desarrolla un sistema que:
1. **Adquiere señales EMG** de los músculos del brazo mediante sensores.
2. **Aplica modelos de Machine Learning** (clasificación supervisada) para identificar movimientos de la mano (flexión, extensión, pinza, etc.) minimizando la variabilidad.
3. **Controla una prótesis impresa en 3D (PLA)** utilizando algoritmos **PID** (Proporcional-Integral-Derivativo) y motores DC, replicando los movimientos detectados.

## 🎯 Objetivos

- Adquirir y acondicionar señales EMG de alta calidad.
- Entrenar modelos de ML que reconozcan al menos 4 movimientos distintos de la mano.
- Implementar un controlador PID para actuación suave y precisa de la prótesis.
- Integrar todo en un sistema portable y de bajo costo.

## 🧠 Tecnologías Utilizadas

| Área | Herramientas / Componentes |
|------|----------------------------|
| **Adquisición de señales** | Sensores EMG (MyoWare, AD8232 o similar), Arduino / ESP32, filtros analógicos y digitales |
| **Machine Learning** | Python, Scikit-learn, TensorFlow (opcional), Pandas, NumPy |
| **Control** | Algoritmo PID implementado en microcontrolador, motor DC, driver L298N o similar |
| **Mecánica** | Prótesis de mano diseñada en CAD, impresión 3D en PLA |
| **Visualización** | Matplotlib, serial plotter, dashboard en Python (Tkinter / Streamlit) |

## 🚀 Instalación y Uso

### Prerrequisitos
- Python 3.8+
- Arduino IDE (para firmware del microcontrolador)
- Librerías Python: `pip install scikit-learn pandas numpy matplotlib pyserial`

### Pasos rápidos

1. **Clonar el repositorio**
   ```bash
   git clone https://github.com/TU_USUARIO/TU_REPOSITORIO.git
   cd TU_REPOSITORIO
