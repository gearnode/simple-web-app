#include <kore/kore.h>
#include <kore/http.h>
#include <unistd.h>

int		page(struct http_request *);

int
page(struct http_request *req)
{
  char *response;

  response = strdup("Hello World!");

	http_response(req, 200, response, strlen(response));
	return (KORE_RESULT_OK);
}
