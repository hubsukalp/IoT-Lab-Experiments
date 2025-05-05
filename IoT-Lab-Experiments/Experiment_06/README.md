# Experiment 6: Node-RED UI for MQTT Visualization

## Objective
To create a dashboard in Node-RED to visualize MQTT messages.

## Setup
1. Install Node-RED:
```bash
npm install -g --unsafe-perm node-red
```

2. Start Node-RED and open it in browser:
```bash
node-red
# Visit http://localhost:1880
```

3. Create flow:
- Add MQTT In → debug (or) dashboard text
- Connect to broker and subscribe to topic

## Output
- Messages from MQTT are displayed on Node-RED dashboard.

## Conclusion
Successfully visualized MQTT data using Node-RED UI.
