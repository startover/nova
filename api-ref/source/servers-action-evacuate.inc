.. -*- rst -*-

Evacuate Server (evacuate Action)
=================================

.. rest_method:: POST /v2.1/{tenant_id}/servers/{server_id}/action

Evacuates a server from a failed host to a new host.

- Specify the ``evacuate`` action in the request body.
- In the request body, if ``onSharedStorage`` is set, then do not set ``adminPass``.
- The target host should not be the same as the instance host.

Normal response codes: 200

Error response codes: computeFault(400, 500), serviceUnavailable(503), badRequest(400),
unauthorized(401), forbidden(403), badMethod(405), itemNotFound(404)

Request
-------

.. rest_parameters:: parameters.yaml

  - tenant_id: tenant_id
  - server_id: server_id
  - evacuate: evacuate
  - host: host
  - adminPass: adminPass_evacuate_rebuild_request
  - onSharedStorage: on_shared_storage

|

**Example Evacuate Server (evacuate Action):**

.. literalinclude:: ../../doc/api_samples/os-evacuate/server-evacuate-req.json
   :language: javascript


Response
--------

.. rest_parameters:: parameters.yaml

  - adminPass: adminPass_evacuate_rebuild

|

**Example Evacuate Server (evacuate Action):**

.. literalinclude:: ../../doc/api_samples/os-evacuate/server-evacuate-resp.json
   :language: javascript
