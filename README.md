# **HomeControlDisplay**

![Titelbild](/pictures/title.jpg)  
![PCB Halterung](/pictures/pcb_holder.jpg)

## **Übersicht**

Das HomeControlDisplay ist ein Projekt, das ein Display in einen Standard-Steckdosenrahmen integriert. Ziel ist eine funktionale und ästhetische Lösung zur Anzeige von Informationen in einem Steckdosenrahmen. Das Display verwendet ein ESP32-2424S012C Board mit einem Touch-Display, das in einem 3D-gedruckten Gehäuse in einem Busch & Jäger Rahmen eingebaut werden kann. Es dient der Steuerung verschiedener Smart-Home-Anwendungen und kann mit einem einfachen ESP32-Programmiercode sowie einer GUI mittels LVGL und SquareLine Studio programmiert werden.

---

## **CAD-Designs**

![Vorderseite](/pictures/cad/front.png)  
![Rückseite](/pictures/cad/back.png)  
![Zuschnitt](/pictures/cad/cut.png)

---

## **Gelöste Probleme**

- **Passgenauigkeit:** Das Display passt exakt in den Steckdosenrahmen.
- **PCB-Halterung:** Die Platine kann eingefädelt und befestigt werden.
- **Steckdosenintegration:** Die Lösung ist kompatibel mit gängigen Steckdosenrahmen.
- **Befestigung:** Das Display lässt sich einigermaßen festklippsen.

---

## **Offene Probleme**

- **USB-C-Anschluss:** Der Anschluss ist im eingebauten Zustand nicht zugänglich.
- **Platine-Befestigung:** Die Befestigung der Platine ist noch nicht optimal.
- **Rahmen-Inlay:** Die Befestigung des Inlays im Steckdosenrahmen bedarf weiterer Verbesserungen.

---

## **Druckeinstellungen**

### **Material:** Amazon White PLA

- **Infill:** 15 %
- **Erste Schicht:** 220°C
- **Überhangschwelle:** 300°C
- **Organisches Stützmaterial:** Ja
- **Weitere Schichten:** 218°C
- **Druckbett:** 55°C konstant
- **Vertikale Konturen:** 5
- **Schichthöhe:** 0,2 mm

---

## **Programmierung**

### **Recherche & Nützliche Links**

Hier sind hilfreiche Ressourcen für die Programmierung des HomeControlDisplays:

- [ESP32 Smart Display](https://github.com/rzeldent/esp32-smartdisplay)
- [PlatformIO Espressif32 Sunton](https://github.com/rzeldent/platformio-espressif32-sunton)
- [SquareLine Studio Downloads](https://squareline.io/downloads)

---

## **To-Do**

### **CAD**

1. Verbesserung der USB-C-Anschluss-Zugänglichkeit.
2. Optimierung der Platinenbefestigung.
3. Stabilisierung des Inlays im Steckdosenrahmen.
4. Weitere Testläufe und Anpassungen.

---

### **Programmierung**

1. Erstellung eines kleinen Beispielprogramms zur Steuerung von Smart-Home-Anwendungen.
