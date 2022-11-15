
all: public

html :
	docker run --rm -v ${PWD}:/mnt -e MARP_USER="$(id -u):$(id -g)" \
	-e LANG=${LANG} -p 8080:8080 -p 37717:37717 marpteam/marp-cli -I /mnt --html

server :
	docker run --rm --init -v ${PWD}:/home/marp/app/ -e LANG=${LANG} \
	-e MARP_USER="$(id -u):$(id -g)" -p 8080:8080 marpteam/marp-cli -s .

public: clean html
	mkdir -p public/
	mkdir -p src
	mv -f *.html public/
	cp -rf images/ public/
	cp -rf src/ public/

clean:
	rm -rf *.html public
