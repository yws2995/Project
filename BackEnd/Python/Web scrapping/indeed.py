import requests
from bs4 import BeautifulSoup

LIMIT = 50
URL = f"https://www.indeed.com/jobs?q=python&limit={LIMIT}"


def extract_indeed_pages():
    result = requests.get(URL)

    soup = BeautifulSoup(result.text, "html.parser")

    pagination = soup.find("div", {"class": "pagination"})

    links = pagination.find_all('a')

    pages = []
    for link in links[0:-1]:
        pages.append(int(link.string))

    max_page = pages[-1]
    return max_page


def extract_indeed_jobs(last_page):
    jobs = []

    result = requests.get(f"{URL}&start={0*LIMIT}")

    soup = BeautifulSoup(result.text, "html.parser")
    results = soup.find_all("h2", {"class": "jobTitle"})
    for h2_item in result:
        all_spans = h2_itme.find_all("span")
        for span_itme in all_spans:
            if span_item.get("title") is not None:
                print(span_item.get("title"))
                jobs.append(span_item.get("title"))
    return jobs
