import requests
from bs4 import BeautifulSoup

for i in range (1, 30):
  url = f"http://r64vsk.lv/notikumi?page_news={i}"
  response = requests.get(url)
  soup = BeautifulSoup(response.content, "html.parser")

  items = soup.find_all("li", class_="media")
  for item in items:
      media_body = item.find("div", class_="media-body")
      time_tag = media_body.find("time", class_="clearfix").text
      h3_tag = media_body.find("h3", class_="media-heading").find("a").text
      print(time_tag, h3_tag)





