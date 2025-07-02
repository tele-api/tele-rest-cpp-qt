/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-02T09:16:57.652454639Z[Etc/UTC]
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

#include "OAISuccessfulPayment.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAISuccessfulPayment::OAISuccessfulPayment(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISuccessfulPayment::OAISuccessfulPayment() {
    this->initializeModel();
}

OAISuccessfulPayment::~OAISuccessfulPayment() {}

void OAISuccessfulPayment::initializeModel() {

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

    m_subscription_expiration_date_isSet = false;
    m_subscription_expiration_date_isValid = false;

    m_is_recurring_isSet = false;
    m_is_recurring_isValid = false;

    m_is_first_recurring_isSet = false;
    m_is_first_recurring_isValid = false;

    m_shipping_option_id_isSet = false;
    m_shipping_option_id_isValid = false;

    m_order_info_isSet = false;
    m_order_info_isValid = false;
}

void OAISuccessfulPayment::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISuccessfulPayment::fromJsonObject(QJsonObject json) {

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

    m_subscription_expiration_date_isValid = ::tele_rest::fromJsonValue(m_subscription_expiration_date, json[QString("subscription_expiration_date")]);
    m_subscription_expiration_date_isSet = !json[QString("subscription_expiration_date")].isNull() && m_subscription_expiration_date_isValid;

    m_is_recurring_isValid = ::tele_rest::fromJsonValue(m_is_recurring, json[QString("is_recurring")]);
    m_is_recurring_isSet = !json[QString("is_recurring")].isNull() && m_is_recurring_isValid;

    m_is_first_recurring_isValid = ::tele_rest::fromJsonValue(m_is_first_recurring, json[QString("is_first_recurring")]);
    m_is_first_recurring_isSet = !json[QString("is_first_recurring")].isNull() && m_is_first_recurring_isValid;

    m_shipping_option_id_isValid = ::tele_rest::fromJsonValue(m_shipping_option_id, json[QString("shipping_option_id")]);
    m_shipping_option_id_isSet = !json[QString("shipping_option_id")].isNull() && m_shipping_option_id_isValid;

    m_order_info_isValid = ::tele_rest::fromJsonValue(m_order_info, json[QString("order_info")]);
    m_order_info_isSet = !json[QString("order_info")].isNull() && m_order_info_isValid;
}

QString OAISuccessfulPayment::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISuccessfulPayment::asJsonObject() const {
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
    if (m_subscription_expiration_date_isSet) {
        obj.insert(QString("subscription_expiration_date"), ::tele_rest::toJsonValue(m_subscription_expiration_date));
    }
    if (m_is_recurring_isSet) {
        obj.insert(QString("is_recurring"), ::tele_rest::toJsonValue(m_is_recurring));
    }
    if (m_is_first_recurring_isSet) {
        obj.insert(QString("is_first_recurring"), ::tele_rest::toJsonValue(m_is_first_recurring));
    }
    if (m_shipping_option_id_isSet) {
        obj.insert(QString("shipping_option_id"), ::tele_rest::toJsonValue(m_shipping_option_id));
    }
    if (m_order_info.isSet()) {
        obj.insert(QString("order_info"), ::tele_rest::toJsonValue(m_order_info));
    }
    return obj;
}

QString OAISuccessfulPayment::getCurrency() const {
    return m_currency;
}
void OAISuccessfulPayment::setCurrency(const QString &currency) {
    m_currency = currency;
    m_currency_isSet = true;
}

bool OAISuccessfulPayment::is_currency_Set() const{
    return m_currency_isSet;
}

bool OAISuccessfulPayment::is_currency_Valid() const{
    return m_currency_isValid;
}

qint32 OAISuccessfulPayment::getTotalAmount() const {
    return m_total_amount;
}
void OAISuccessfulPayment::setTotalAmount(const qint32 &total_amount) {
    m_total_amount = total_amount;
    m_total_amount_isSet = true;
}

bool OAISuccessfulPayment::is_total_amount_Set() const{
    return m_total_amount_isSet;
}

bool OAISuccessfulPayment::is_total_amount_Valid() const{
    return m_total_amount_isValid;
}

QString OAISuccessfulPayment::getInvoicePayload() const {
    return m_invoice_payload;
}
void OAISuccessfulPayment::setInvoicePayload(const QString &invoice_payload) {
    m_invoice_payload = invoice_payload;
    m_invoice_payload_isSet = true;
}

bool OAISuccessfulPayment::is_invoice_payload_Set() const{
    return m_invoice_payload_isSet;
}

bool OAISuccessfulPayment::is_invoice_payload_Valid() const{
    return m_invoice_payload_isValid;
}

QString OAISuccessfulPayment::getTelegramPaymentChargeId() const {
    return m_telegram_payment_charge_id;
}
void OAISuccessfulPayment::setTelegramPaymentChargeId(const QString &telegram_payment_charge_id) {
    m_telegram_payment_charge_id = telegram_payment_charge_id;
    m_telegram_payment_charge_id_isSet = true;
}

bool OAISuccessfulPayment::is_telegram_payment_charge_id_Set() const{
    return m_telegram_payment_charge_id_isSet;
}

bool OAISuccessfulPayment::is_telegram_payment_charge_id_Valid() const{
    return m_telegram_payment_charge_id_isValid;
}

QString OAISuccessfulPayment::getProviderPaymentChargeId() const {
    return m_provider_payment_charge_id;
}
void OAISuccessfulPayment::setProviderPaymentChargeId(const QString &provider_payment_charge_id) {
    m_provider_payment_charge_id = provider_payment_charge_id;
    m_provider_payment_charge_id_isSet = true;
}

bool OAISuccessfulPayment::is_provider_payment_charge_id_Set() const{
    return m_provider_payment_charge_id_isSet;
}

bool OAISuccessfulPayment::is_provider_payment_charge_id_Valid() const{
    return m_provider_payment_charge_id_isValid;
}

qint32 OAISuccessfulPayment::getSubscriptionExpirationDate() const {
    return m_subscription_expiration_date;
}
void OAISuccessfulPayment::setSubscriptionExpirationDate(const qint32 &subscription_expiration_date) {
    m_subscription_expiration_date = subscription_expiration_date;
    m_subscription_expiration_date_isSet = true;
}

bool OAISuccessfulPayment::is_subscription_expiration_date_Set() const{
    return m_subscription_expiration_date_isSet;
}

bool OAISuccessfulPayment::is_subscription_expiration_date_Valid() const{
    return m_subscription_expiration_date_isValid;
}

bool OAISuccessfulPayment::isIsRecurring() const {
    return m_is_recurring;
}
void OAISuccessfulPayment::setIsRecurring(const bool &is_recurring) {
    m_is_recurring = is_recurring;
    m_is_recurring_isSet = true;
}

bool OAISuccessfulPayment::is_is_recurring_Set() const{
    return m_is_recurring_isSet;
}

bool OAISuccessfulPayment::is_is_recurring_Valid() const{
    return m_is_recurring_isValid;
}

bool OAISuccessfulPayment::isIsFirstRecurring() const {
    return m_is_first_recurring;
}
void OAISuccessfulPayment::setIsFirstRecurring(const bool &is_first_recurring) {
    m_is_first_recurring = is_first_recurring;
    m_is_first_recurring_isSet = true;
}

bool OAISuccessfulPayment::is_is_first_recurring_Set() const{
    return m_is_first_recurring_isSet;
}

bool OAISuccessfulPayment::is_is_first_recurring_Valid() const{
    return m_is_first_recurring_isValid;
}

QString OAISuccessfulPayment::getShippingOptionId() const {
    return m_shipping_option_id;
}
void OAISuccessfulPayment::setShippingOptionId(const QString &shipping_option_id) {
    m_shipping_option_id = shipping_option_id;
    m_shipping_option_id_isSet = true;
}

bool OAISuccessfulPayment::is_shipping_option_id_Set() const{
    return m_shipping_option_id_isSet;
}

bool OAISuccessfulPayment::is_shipping_option_id_Valid() const{
    return m_shipping_option_id_isValid;
}

OAIOrderInfo OAISuccessfulPayment::getOrderInfo() const {
    return m_order_info;
}
void OAISuccessfulPayment::setOrderInfo(const OAIOrderInfo &order_info) {
    m_order_info = order_info;
    m_order_info_isSet = true;
}

bool OAISuccessfulPayment::is_order_info_Set() const{
    return m_order_info_isSet;
}

bool OAISuccessfulPayment::is_order_info_Valid() const{
    return m_order_info_isValid;
}

bool OAISuccessfulPayment::isSet() const {
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

        if (m_subscription_expiration_date_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_recurring_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_first_recurring_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_shipping_option_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_order_info.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISuccessfulPayment::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_currency_isValid && m_total_amount_isValid && m_invoice_payload_isValid && m_telegram_payment_charge_id_isValid && m_provider_payment_charge_id_isValid && true;
}

} // namespace tele_rest
