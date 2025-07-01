/**
 * Telegram Bot API - REST API Client
 * Auto-generated OpenAPI schema
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:14:29.176360440Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Telegram Bot API service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

#include "OAIRefundedPayment.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIRefundedPayment::OAIRefundedPayment(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIRefundedPayment::OAIRefundedPayment() {
    this->initializeModel();
}

OAIRefundedPayment::~OAIRefundedPayment() {}

void OAIRefundedPayment::initializeModel() {

    m_currency_isSet = false;
    m_currency_isValid = false;

    m_total_amount_isSet = false;
    m_total_amount_isValid = false;

    m_invoice_payload_isSet = false;
    m_invoice_payload_isValid = false;

    m_telegram_payment_charge_id_isSet = false;
    m_telegram_payment_charge_id_isValid = false;

    m_provider_payment_charge_id_isSet = false;
    m_provider_payment_charge_id_isValid = false;
}

void OAIRefundedPayment::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIRefundedPayment::fromJsonObject(QJsonObject json) {

    m_currency_isValid = ::tele_rest::fromJsonValue(m_currency, json[QString("currency")]);
    m_currency_isSet = !json[QString("currency")].isNull() && m_currency_isValid;

    m_total_amount_isValid = ::tele_rest::fromJsonValue(m_total_amount, json[QString("total_amount")]);
    m_total_amount_isSet = !json[QString("total_amount")].isNull() && m_total_amount_isValid;

    m_invoice_payload_isValid = ::tele_rest::fromJsonValue(m_invoice_payload, json[QString("invoice_payload")]);
    m_invoice_payload_isSet = !json[QString("invoice_payload")].isNull() && m_invoice_payload_isValid;

    m_telegram_payment_charge_id_isValid = ::tele_rest::fromJsonValue(m_telegram_payment_charge_id, json[QString("telegram_payment_charge_id")]);
    m_telegram_payment_charge_id_isSet = !json[QString("telegram_payment_charge_id")].isNull() && m_telegram_payment_charge_id_isValid;

    m_provider_payment_charge_id_isValid = ::tele_rest::fromJsonValue(m_provider_payment_charge_id, json[QString("provider_payment_charge_id")]);
    m_provider_payment_charge_id_isSet = !json[QString("provider_payment_charge_id")].isNull() && m_provider_payment_charge_id_isValid;
}

QString OAIRefundedPayment::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIRefundedPayment::asJsonObject() const {
    QJsonObject obj;
    if (m_currency_isSet) {
        obj.insert(QString("currency"), ::tele_rest::toJsonValue(m_currency));
    }
    if (m_total_amount_isSet) {
        obj.insert(QString("total_amount"), ::tele_rest::toJsonValue(m_total_amount));
    }
    if (m_invoice_payload_isSet) {
        obj.insert(QString("invoice_payload"), ::tele_rest::toJsonValue(m_invoice_payload));
    }
    if (m_telegram_payment_charge_id_isSet) {
        obj.insert(QString("telegram_payment_charge_id"), ::tele_rest::toJsonValue(m_telegram_payment_charge_id));
    }
    if (m_provider_payment_charge_id_isSet) {
        obj.insert(QString("provider_payment_charge_id"), ::tele_rest::toJsonValue(m_provider_payment_charge_id));
    }
    return obj;
}

QString OAIRefundedPayment::getCurrency() const {
    return m_currency;
}
void OAIRefundedPayment::setCurrency(const QString &currency) {
    m_currency = currency;
    m_currency_isSet = true;
}

bool OAIRefundedPayment::is_currency_Set() const{
    return m_currency_isSet;
}

bool OAIRefundedPayment::is_currency_Valid() const{
    return m_currency_isValid;
}

qint32 OAIRefundedPayment::getTotalAmount() const {
    return m_total_amount;
}
void OAIRefundedPayment::setTotalAmount(const qint32 &total_amount) {
    m_total_amount = total_amount;
    m_total_amount_isSet = true;
}

bool OAIRefundedPayment::is_total_amount_Set() const{
    return m_total_amount_isSet;
}

bool OAIRefundedPayment::is_total_amount_Valid() const{
    return m_total_amount_isValid;
}

QString OAIRefundedPayment::getInvoicePayload() const {
    return m_invoice_payload;
}
void OAIRefundedPayment::setInvoicePayload(const QString &invoice_payload) {
    m_invoice_payload = invoice_payload;
    m_invoice_payload_isSet = true;
}

bool OAIRefundedPayment::is_invoice_payload_Set() const{
    return m_invoice_payload_isSet;
}

bool OAIRefundedPayment::is_invoice_payload_Valid() const{
    return m_invoice_payload_isValid;
}

QString OAIRefundedPayment::getTelegramPaymentChargeId() const {
    return m_telegram_payment_charge_id;
}
void OAIRefundedPayment::setTelegramPaymentChargeId(const QString &telegram_payment_charge_id) {
    m_telegram_payment_charge_id = telegram_payment_charge_id;
    m_telegram_payment_charge_id_isSet = true;
}

bool OAIRefundedPayment::is_telegram_payment_charge_id_Set() const{
    return m_telegram_payment_charge_id_isSet;
}

bool OAIRefundedPayment::is_telegram_payment_charge_id_Valid() const{
    return m_telegram_payment_charge_id_isValid;
}

QString OAIRefundedPayment::getProviderPaymentChargeId() const {
    return m_provider_payment_charge_id;
}
void OAIRefundedPayment::setProviderPaymentChargeId(const QString &provider_payment_charge_id) {
    m_provider_payment_charge_id = provider_payment_charge_id;
    m_provider_payment_charge_id_isSet = true;
}

bool OAIRefundedPayment::is_provider_payment_charge_id_Set() const{
    return m_provider_payment_charge_id_isSet;
}

bool OAIRefundedPayment::is_provider_payment_charge_id_Valid() const{
    return m_provider_payment_charge_id_isValid;
}

bool OAIRefundedPayment::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_currency_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_total_amount_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_invoice_payload_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_telegram_payment_charge_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_provider_payment_charge_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIRefundedPayment::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_currency_isValid && m_total_amount_isValid && m_invoice_payload_isValid && m_telegram_payment_charge_id_isValid && true;
}

} // namespace tele_rest
