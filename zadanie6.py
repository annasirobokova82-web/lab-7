import re

def extract_and_sum(text: str):
    
    # Регулярное выражение для поиска чисел (последовательности цифр)
    pattern = r'-?\d+(?:\.\d+)?'
    numbers = re.findall(pattern, text)
    
    # Проверка: найдены ли числа
    if not numbers:
        return [], 0
    
    # Преобразуем строки в целые числа
    int_numbers = [float(n) for n in numbers]
    return int_numbers, sum(int_numbers)

# Тестовые данные
text = "В 2023 году температура упала до -5 градусов, а затем поднялась до 3.5."
    
print(f"Исходный текст: {text}\n")
    
numbers, total = extract_and_sum(text)
    
# Проверки и вывод
if numbers:
    print(f"Найденные числа: {numbers}")
    print(f"Сумма всех чисел: {total}")
else:
    print("Числа в тексте не найдены.")
    
