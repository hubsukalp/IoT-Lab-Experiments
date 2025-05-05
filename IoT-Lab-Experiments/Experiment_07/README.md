# Experiment 7: Google Cloud Logging

## Objective
Send real-time data to Google Cloud Firestore.

## Python Example
```python
from google.cloud import firestore

db = firestore.Client()
doc_ref = db.collection(u'logs').document()
doc_ref.set({u'temperature': 25, u'humidity': 70})
```
