# API Documentation

## Overview
This document contains information about the REST API endpoints for the Bell Sekolah Terprogram Via Web dengan ESP32 application.

## Base URL
The base URL for the API is: `http://<your-domain>/api`

## Endpoints

### 1. Get All Items
- **Endpoint:** `/items`
- **Method:** `GET`
- **Description:** Returns a list of all items.
- **Response:** 200 OK with an array of items.

### 2. Get Item by ID
- **Endpoint:** `/items/{id}`
- **Method:** `GET`
- **Description:** Returns a single item by its ID.
- **Response:** 200 OK with the item object.
- **Example:** `/items/1`

### 3. Create Item
- **Endpoint:** `/items`
- **Method:** `POST`
- **Description:** Creates a new item.
- **Request Body:** JSON object with item details.
- **Response:** 201 Created with the created item object.

### 4. Update Item
- **Endpoint:** `/items/{id}`
- **Method:** `PUT`
- **Description:** Updates an existing item by its ID.
- **Request Body:** JSON object with updated item details.
- **Response:** 200 OK with the updated item object.

### 5. Delete Item
- **Endpoint:** `/items/{id}`
- **Method:** `DELETE`
- **Description:** Deletes an item by its ID.
- **Response:** 204 No Content.

## Error Handling
All responses will return a standard error format:
- **Error Response:**
  - Status: 400 Bad Request
  - Body: `{ "error": "Error message" }`

## Security
Authentication is required for all endpoints. Ensure to include your API key in the request headers.

---

## Contact
For any issues or questions, please contact [support@your-domain.com].
