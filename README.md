<head>
  <style>
    body {
      font-family: sans-serif;
      background-color: #f5f5f5;
      margin: 0;
      padding: 20px;
    }

    h2 {
      font-size: 2em;
      text-align: center;
      color: #222;
      margin-bottom: 10px;
      text-shadow: 0 2px 4px rgba(0, 0, 0, 0.2);
    }

    .section {
      border-bottom: 1px solid #ddd;
      padding: 20px 0;
    }

    h3 {
      font-size: 1.5em;
      margin-bottom: 5px;
      color: #444;
    }

    ul {
      list-style: none;
      padding: 0;
      margin: 0;
    }

    li {
      margin-bottom: 5px;
      font-weight: bold;
    }

    .features li::before {
      content: "\u2713";
      color: #333;
      margin-right: 5px;
    }

    .applications li {
      display: inline-block;
      margin-right: 10px;
    }

    .image-container {
      display: flex;
      justify-content: center;
      align-items: center;
      margin-bottom: 20px;
    }

    .image {
      width: 150px;
      height: 150px;
      border-radius: 50%;
      box-shadow: 0 5px 10px rgba(0, 0, 0, 0.2);
    }

    .button {
      background-color: #333;
      color: #fff;
      padding: 10px 20px;
      border: none;
      border-radius: 5px;
      font-size: 16px;
      cursor: pointer;
      text-shadow: 0 1px 2px rgba(0, 0, 0, 0.2);
    }

    .button:hover {
      background-color: #444;
    }
  </style>
</head>

<body>
  <h2><span style="color: #333;">RFID-Based Access Control System</span></h2>
  <p><strong>Empowering Secure Entry with Wireless Identification Technology</strong></p>

  <p>Introducing a robust and user-friendly access control system built on the power of RFID (Radio-frequency identification) technology. This Arduino-powered project grants authorized access with a simple scan and deters unwanted entries with instant visual and audio feedback.</p>

  <div class="section">
    <h3>Features</h3>
    <ul class="features">
      <li><span style="color: #222;">Touchless Convenience:</span> Scan your authorized RFID tag or card for effortless entry.</li>
      <li><span style="color: #222;">Visual Confirmation:</span> Green LED and "Access Granted" message on the LCD display validate authorized access.</li>
      <li><span style="color: #222;">Auditory Alert:</span> Red LED and buzzer combination instantly deter unauthorized attempts.</li>
      <li><span style="color: #222;">Customizable Security:</span> Define the authorized RFID IDs in the code for complete control.</li>
      <li><span style="color: #222;">Clear Guidance:</span> LCD prompts like "Present Tag" guide users for seamless operation.</li>
      <li><span style="color: #222;">Compact and Efficient:</span> Arduino platform offers a cost-effective and portable solution.</li>
    </ul>
  </div>

  <div class="section">
    <h3>Applications</h3>
    <ul class="applications">
      <li><a href="#">Secure home or office entry points</a></li>
      <li><a href="#">Restricted access to labs, workshops, or storage areas</a></li>
      <li><a href="#">Event management and guest registration</a></li>
      <li><a href="#">Time and attendance
