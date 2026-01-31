# core.py
import random
from dataclasses import dataclass

OPS = ["+", "-", "*", "/"]

@dataclass
class Problem:
    a: int
    b: int
    op: str
    answer: int  # budeme držať celé číslo
    text: str    # napr. "7 + 5"

def generate_problem() -> Problem:
    a = random.randint(1, 99)
    b = random.randint(1, 99)
    op = random.choice(OPS)

    if op == "+":
        answer = a + b
        text = f"{a} + {b}"
        return Problem(a, b, op, answer, text)

    if op == "-":
        # aby nebol záporný výsledok
        x, y = max(a, b), min(a, b)
        answer = x - y
        text = f"{x} - {y}"
        return Problem(x, y, op, answer, text)

    if op == "*":
        # tvoja pôvodná logika: zmenši čísla
        x = a // 10 + 1
        y = b // 10 + 1
        answer = x * y
        text = f"{x} * {y}"
        return Problem(x, y, op, answer, text)

    # op == "/"
    # spravíme delenie tak, aby výsledok bol celé číslo:
    # vyberieme deliteľa y a výsledok k, potom a = y*k
    y = random.randint(2, 10)
    k = random.randint(2, 10)
    x = y * k
    answer = k
    text = f"{x} / {y}"
    return Problem(x, y, op, answer, text)

def check_answer(problem: Problem, user_answer: int) -> bool:
    return user_answer == problem.answer
