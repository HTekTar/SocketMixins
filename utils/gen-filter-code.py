import json

node_cfg = '''{
  "node": 1,
  "source": [
    {
      "protocol": "HTTP",
      "message_type": "JSON",
      "topic": "user"
    }
  ],
  "sink": [
    {
      "protocol": "Kafka",
      "message_type": "Avro",
      "topic": "orders"
    },
    {
      "protocol": "MQTT",
      "message_type": "Text",
      "topic": "alerts"
    }
  ]
}'''

json_obj = json.loads(node_cfg)

source_dict = {}

# assuming the JSON object is stored in a variable called 'json_obj'
for source in json_obj['source']:
    protocol = source['protocol']
    message_type = source['message_type']
    topic = source['topic']
    if protocol not in source_dict:
        source_dict[protocol] = []
    source_dict[protocol].append((message_type, topic))

print(source_dict)