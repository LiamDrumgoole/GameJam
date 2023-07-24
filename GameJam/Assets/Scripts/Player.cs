using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    public int moveSpeed;
    public int jumpHeight;
    
    private Rigidbody rb;
    private bool isGrounded = false;
    private bool isGliding = false;
    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void Update()
    {
        // Move Left
        if (Input.GetKey(KeyCode.A))
        {
            transform.position -= new Vector3(moveSpeed * 0.01f, 0, 0);
        }
        // Move Right
        if (Input.GetKey(KeyCode.D))
        {
            transform.position += new Vector3(moveSpeed * .01f, 0, 0);
        }
        // Jump
        if (Input.GetKeyDown(KeyCode.Space) && isGrounded)
        {
            rb.AddForce(Vector3.up * (jumpHeight * 100));
        }

        if (isGliding)
        {
            
        }
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Ground"))
            isGrounded = true;
    }

    private void OnCollisionExit(Collision other)
    {
        isGrounded = false;
    }
}
