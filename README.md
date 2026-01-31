# Projekt zaliczeniowy: Gra "Zgadnij Liczbę"

Gra konsolowa napisana w języku C++. Celem gry jest odgadnięcie wylosowanej liczby w jak najmniejszej liczbie prób.

## Jak uruchomić
Projekt został napisany w Visual Studio (Windows). Aby uruchomić grę:
1. Otwórz projekt w Visual Studio.
2. Skompiluj i uruchom program (F5).
3. Ewentualnie skompiluj pliki `.cpp` ręcznie np. przez g++ (wymaga środowiska Windows ze względu na biblioteki systemowe).

## Sterowanie
Gra obsługiwana jest wyłącznie klawiaturą:
* **Menu główne:** Wybór opcji klawiszami `1`, `2`, `3`, `4` (poziomy trudności) lub `5` (wyniki).
* **W grze:**
  * Wpisywanie liczb: klawisze numeryczne `0-9`.
  * Zatwierdzenie: `Enter`.
  * Poprawa błędów: `Backspace`.
  * Wyjście do menu: `ESC`.
* **Ekran powitalny:** Spacja, aby przejść dalej.

## Możliwości i funkcje
Zgodnie z wymaganiami projekt zawiera:
* **Menu i ekran powitalny:** Możliwość rozpoczęcia nowej gry lub sprawdzenia TOP 5.
* **Poziomy trudności:**
  1. Łatwy (1-50)
  2. Średni (1-250)
  3. Trudny (1-999)
  4. Tryb zakładu (gracz sam ustala limit prób, zakres 1-100).
* **Mechanika gry:**
  * Wyświetlanie aktualnej liczby prób.
  * Losowe komunikaty (np. "Za dużo", "Celuj niżej") zamiast jednego stałego tekstu.
  * Zabezpieczenie przed wpisywaniem liter lub zbyt długich liczb.
* **Tabela wyników:**
  * Zapisuje najlepsze wyniki (TOP 5) z podziałem na poziomy trudności.
  * Po wygranej gracz podaje swoje imię.
  * Sortowanie wyników od najmniejszej liczby prób.
* **Interfejs:** "Interfejs graficzny" oparty na znakach ASCII (ramki, napisy).
