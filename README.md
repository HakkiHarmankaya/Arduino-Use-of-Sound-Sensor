# 🎙️ Arduino #11: Ses Sensörü ile Ses Algılama Devresi

Bu projede, bir **ses sensörü** kullanarak ortamdaki sesi algılayan ve LED'lerle tepki veren bir devre kuruyoruz.  
Ses algılandığında **yeşil LED**, sessizlikte ise **kırmızı LED** yanar.

🔗 [Web Siteme Bakmak İçin Tıkla](https://www.hakkiharmankaya.com/)  


---

## 🧰 Gerekli Malzemeler

- 1 adet **ses sensör kartı (mikrofon modülü)**
- 2 adet **LED** (kırmızı ve yeşil)
- 2 adet **direnç** (220Ω veya 330Ω)
- 1 adet **Arduino**
- 1 adet **breadboard**
- **Jumper kabloları**

---

## ⚙️ Adım Adım Devre Kurulumu

### 🔹 Adım 1: Devreyi Kurun

- **Ses sensörü**:
  - **VCC** → **5V**
  - **GND** → **GND**
  - **OUT** → **D2**

- **Kırmızı LED** (sessizlikte yanan):
  - **Anot (uzun bacak)** → direnç → **D3**
  - **Katot (kısa bacak)** → **GND**

- **Yeşil LED** (ses algılandığında yanan):
  - **Anot** → direnç → **D4**
  - **Katot** → **GND**

---

## 🔹 Adım 2: Arduino Kodunu Yazın ve Yükleyin

```cpp
void setup() {
  pinMode(2, INPUT);   // Ses sensöründen veri girişi
  pinMode(3, OUTPUT);  // Kırmızı LED
  pinMode(4, OUTPUT);  // Yeşil LED
}

void loop() {
  int ses = digitalRead(2);

  if (ses == 0) {
    digitalWrite(3, HIGH); // Kırmızı LED yanar
    digitalWrite(4, LOW);  // Yeşil LED söner
  } else {
    digitalWrite(3, LOW);  // Kırmızı LED söner
    digitalWrite(4, HIGH); // Yeşil LED yanar
  }
}
