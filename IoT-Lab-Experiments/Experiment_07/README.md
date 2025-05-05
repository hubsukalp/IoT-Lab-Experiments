# Experiment 7: Real-Time Data Logging to Google Cloud

## Objective
To send real-time data from Python to Google Cloud Firestore.

## Requirements
- Google Cloud project and Firestore enabled
- `google-cloud-firestore` Python package

## Procedure
1. Install library:
```bash
pip install google-cloud-firestore
```

2. Python Code:
```python
from google.cloud import firestore

db = firestore.Client()
doc_ref = db.collection(u'logs').document()
doc_ref.set({u'temperature': 25, u'humidity': 70})
print("Data uploaded")
```

## Output
- Data logged into Firestore collection.

## Conclusion
Successfully logged sensor data into Google Cloud.
